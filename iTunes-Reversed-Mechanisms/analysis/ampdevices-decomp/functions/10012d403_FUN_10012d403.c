// name: FUN_10012d403
// address: 10012d403

uint FUN_10012d403(undefined8 param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  long local_40 [2];
  undefined1 local_30 [8];
  long local_28 [2];
  
  FUN_1001a8d5a(local_50,*param_2,1);
  FUN_1001aaf3c(local_28,"diversitybag");
  FUN_10032f0f2(local_70);
  FUN_10012d582(local_40,local_50,local_28,local_70);
  FUN_1001a85d4(local_70);
  FUN_1001ab006(local_28);
  if (local_40[0] != 0) {
    FUN_100416202(param_1,local_40);
  }
  FUN_1001aaf3c(local_30,"keybag");
  FUN_10032f0f2(local_60);
  FUN_10012d582(local_28,local_50,local_30,local_60);
  FUN_1001a85d4(local_60);
  FUN_1001ab006(local_30);
  if (local_28[0] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_100416406(param_1,local_28,0);
    if ((uVar1 & 0xfffffffd) == 0xffff5bed) {
      uVar1 = FUN_100416406(param_1,local_28,1);
    }
  }
  FUN_1001a85d4(local_28);
  FUN_1001a85d4(local_40);
  FUN_1001a8fac(local_50);
  return uVar1;
}

