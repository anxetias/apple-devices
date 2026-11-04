// name: FUN_10022509c
// address: 10022509c

void FUN_10022509c(int param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long local_30 [4];
  
  local_30[0] = FUN_1005f4b1c();
  local_30[1] = 0;
  local_30[2] = 0;
  local_30[3] = 0;
  if (local_30[0] != 0) {
    if (param_1 == 0x69427269) {
      uVar1 = 0x21;
      uVar2 = 0x22;
    }
    else if (param_1 == 0x4d616320) {
      uVar1 = 0x1f;
      uVar2 = 0x20;
    }
    else {
      FUN_100225173(local_30,0x16,0x15);
      FUN_100225173(local_30,0x18,0x17);
      FUN_100225173(local_30,0x14,0x13);
      FUN_100225173(local_30,0x1a,0x19);
      uVar1 = 0x1b;
      uVar2 = 0x1c;
    }
    FUN_100225173(local_30,uVar2,uVar1);
  }
  FUN_100225064(local_30);
  return;
}

