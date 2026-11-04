// name: FUN_10013a8bc
// address: 10013a8bc

void FUN_10013a8bc(long param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  undefined1 *puVar3;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [8];
  
  if (*param_2 == 0) {
    FUN_1001a7b90(local_38);
    FUN_1001b7a44(local_68);
    FUN_1001b7a44(local_58);
    cVar2 = FUN_1001a944e(param_3,local_38,local_58);
    puVar3 = local_68;
    if (cVar2 != '\0') {
      puVar3 = local_58;
    }
    FUN_1001b7a5c(local_48,puVar3);
    FUN_1001b7a50(local_58);
    FUN_1001b7a50(local_68);
    FUN_1001ab240(local_38);
  }
  else {
    FUN_1001b7a44(local_48);
  }
  plVar1 = *(long **)(param_1 + 0x30);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x30))(plVar1,local_48,param_2);
  }
  FUN_1001b7a50(local_48);
  return;
}

