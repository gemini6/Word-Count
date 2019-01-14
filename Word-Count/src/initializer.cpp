// initializer.cpp

#using <System.dll>
#using <System.Windows.Forms.dll>

#include "initializer.h"
#include "gui\gui.h"

using namespace System;
using namespace System::Windows::Forms;

Initializer::Initializer(void) {
    init();
}

Initializer::~Initializer(void) {

}

void Initializer::init() {
    ApplicationContext^ word_count_cntxt = (gcnew ApplicationContext());
    word_count_cntxt->MainForm = (gcnew WordCount::gui());
    word_count_cntxt->ThreadExit += (gcnew System::EventHandler(this, &Initializer::onWordCountMainThreadExit));
    Application::Run(word_count_cntxt);
}

void Initializer::onWordCountMainThreadExit(System::Object^ o, System::EventArgs^ ea) {
   
}