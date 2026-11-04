// name: FUN_100156c42
// address: 100156c42

void FUN_100156c42(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  undefined1 local_20 [8];
  
  FUN_100155894(local_50,*(undefined8 *)(param_1 + 0x10),param_2,param_3);
  plVar1 = *(long **)(param_1 + 0x40);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x30))(plVar1,local_20,local_50);
  }
  FUN_1001aaad2(local_20);
  FUN_1001a85d4(local_30);
  FUN_1001a85d4(local_40);
  FUN_1001a85d4(local_50);
  return;
}

