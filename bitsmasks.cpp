int NBmax = 8;
vector <string> masks;
void generatebitmasks(string curr,int x) {
  if (x == NBmax)
  {
    masks.pb(curr);
    return;
  }
  ostringstream tmp1,tmp2;
  tmp1<<curr<<"1";
  tmp2<<curr<<"0";
  generatebitmasks(tmp1.str(),x+1);
  generatebitmasks(tmp2.str(),x+1);
}
