// name: FUN_1004ac981
// address: 1004ac981

void FUN_1004ac981(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  
  cVar3 = FUN_1004aa626();
  if ((cVar3 != '\0') && (*(char *)(param_1 + 0x778) != '\0')) {
    FUN_1004acb38(param_1);
    return;
  }
  cVar3 = FUN_1004aa626(param_1);
  if (((cVar3 == '\0') || (*(char *)(param_1 + 0x778) != '\0')) ||
     (*(int *)(param_1 + 0x140) != 0x66696c65)) {
    return;
  }
  if ((*(int *)(param_1 + 0x1304) != 0x636f7079) && (*(int *)(param_1 + 0x7d8) < 0)) {
    FUN_1004acb38(param_1);
  }
  plVar1 = *(long **)(param_1 + 0x1258);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
    (**(code **)(**(long **)(param_1 + 0x1258) + 0x1d0))();
    FUN_100295c56((undefined8 *)(param_1 + 0x1258));
  }
  plVar2 = *(long **)(param_1 + 0x1278);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
    (**(code **)(**(long **)(param_1 + 0x1278) + 0x1d0))();
    FUN_100295c56((undefined8 *)(param_1 + 0x1278));
  }
  if ((*(char *)(param_1 + 0x778) == '\0') &&
     (((*(int *)(param_1 + 0x140) != 0x66696c65 || (*(int *)(param_1 + 0x1304) == 0x636f7079)) ||
      (-1 < *(int *)(param_1 + 0x7d8))))) {
    FUN_100182d4d(param_1 + 0xe30);
    FUN_1004a9316(param_1,0);
  }
  else {
    if (*(char *)(param_1 + 0x1250) != '\x01') {
      *(undefined8 *)(param_1 + 0x12f0) = 0;
      *(undefined8 *)(param_1 + 0x1b78) = 0;
      *(undefined8 *)(param_1 + 7000) = 0;
      *(undefined8 *)(param_1 + 0x200) = 0;
      *(undefined1 *)(param_1 + 0x12d0) = 0;
      if (plVar2 == (long *)0x0 && plVar1 == (long *)0x0) {
        return;
      }
      goto LAB_1004acaf1;
    }
    FUN_1004ac737(param_1,param_1 + 0xe30);
    FUN_1004a9316(param_1,0);
    *(undefined1 *)(param_1 + 0x640) = 0;
  }
  *(undefined8 *)(param_1 + 0x12f0) = 0;
  *(undefined8 *)(param_1 + 0x1b78) = 0;
  *(undefined8 *)(param_1 + 7000) = 0;
  *(undefined8 *)(param_1 + 0x200) = 0;
  *(undefined1 *)(param_1 + 0x12d0) = 0;
LAB_1004acaf1:
  FUN_1004acc1d(param_1);
  return;
}

