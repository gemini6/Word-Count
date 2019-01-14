// initializer.h

public ref class Initializer {

public:
    Initializer(void);

protected:
    virtual ~Initializer();

private:
    void init();
    void onWordCountMainThreadExit(System::Object^ o, System::EventArgs^ ea);

};