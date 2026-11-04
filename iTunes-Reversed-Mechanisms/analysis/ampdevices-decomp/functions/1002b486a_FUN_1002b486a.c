// name: FUN_1002b486a
// address: 1002b486a

undefined8 FUN_1002b486a(undefined8 param_1,long param_2)

{
  char cVar1;
  undefined1 local_28 [16];
  
  FUN_10032f0f2();
  cVar1 = FUN_10032109f(param_2);
  if (cVar1 != '\0') {
    FUN_1001a833e(local_28,*(undefined8 *)(param_2 + 0x88),*(undefined4 *)(param_2 + 0x90),0);
    FUN_1001a7b1c(param_1,local_28);
    FUN_1001a85d4(local_28);
  }
  return param_1;
}

