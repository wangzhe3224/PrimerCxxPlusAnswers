#ifndef CH10_3_
#define CH10_3_

class Golf
{
 private:
  static const int Len = 40;
  char fullname[Len];
  int handicap;
 public:
  Golf(const char * fn = "Hi", const int h=0);
  void setgolf();
  void show();
};
#endif
