// name: FUN_1002c4ed2
// address: 1002c4ed2

int FUN_1002c4ed2(void)

{
  int iVar1;
  long in_RCX;
  long local_40;
  undefined8 local_38;
  ulong local_30;
  int local_24;
  
  iVar1 = FUN_1002c4ca2();
  if (iVar1 == 0) {
    if (local_24 == 1) {
      iVar1 = FUN_1001e73f2(local_38,local_30 >> 1,in_RCX,0x400,&local_40);
      *(undefined1 *)(in_RCX + local_40) = 0;
      if (iVar1 != 0) {
        return iVar1;
      }
    }
    else {
      FUN_1001dfaed(local_38,local_30,in_RCX,0x400);
    }
    iVar1 = 0;
    FUN_1001dfeed(in_RCX,0,1);
    FUN_1001dfe36(in_RCX,0x3a,0x2f);
  }
  return iVar1;
}

