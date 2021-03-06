#include <FL/Fl.H>
#include <FL/Fl_Input.H>
#include <FL/Fl_Window.H>

class Form : public Fl_Window {
public:
  Form() : Fl_Window(200, 100, 300, 300, "TextBox example") {
    this->resizable(this);
    
    this->textBox1.value("textBox1");
    
    this->textBox2.value("textBox2");
  }
  
private:
  Fl_Input textBox1 {10, 10, 75, 25};
  Fl_Input textBox2 {10, 50, 75, 25};
};

int main(int argc, char *argv[]) {
  Form form;
  form.show(argc, argv);
  Fl::add_handler([](int event)->int {return event == FL_SHORTCUT && Fl::event_key() == FL_Escape;});
  return Fl::run();
}
