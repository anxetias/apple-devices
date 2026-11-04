// name: FUN_10014b75c
// address: 10014b75c

undefined4 FUN_10014b75c(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 local_48 [16];
  undefined1 local_38 [8];
  
  cVar1 = FUN_1001ab24a(param_3);
  if (cVar1 == '\0') {
    FUN_1001bb78a(local_48,"%@",*param_3);
  }
  else {
    FUN_1001ab042(local_38,param_3);
    FUN_1001b7f2a(local_48,local_38);
  }
  uVar2 = (**(code **)(*param_1 + 0x10))(param_1,param_2,local_48);
  FUN_1001b7a50(local_48);
  if (cVar1 != '\0') {
    FUN_1001ab006(local_38);
  }
  return uVar2;
}

