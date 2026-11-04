// name: FUN_1005c80d0
// address: 1005c80d0

void FUN_1005c80d0(void *param_1)

{
  long *plVar1;
  long lVar2;
  
  if (*(code **)((long)param_1 + 0x8c0) != (code *)0x0) {
    (**(code **)((long)param_1 + 0x8c0))
              ((long)param_1 + 0x470,*(undefined8 *)((long)param_1 + 0x8c8));
  }
  FUN_10017060f(*(undefined8 *)((long)param_1 + 0x470));
  FUN_10017060f(*(undefined8 *)((long)param_1 + 0x478));
  FUN_10017060f(*(undefined8 *)((long)param_1 + 0x480));
  FUN_10017060f(*(undefined8 *)((long)param_1 + 0x488));
  plVar1 = *(long **)((long)param_1 + 0x30);
  if (plVar1 == (long *)((long)param_1 + 0x10)) {
    lVar2 = 0x20;
  }
  else {
    lVar2 = 0x28;
    if (plVar1 == (long *)0x0) goto LAB_1005c8149;
  }
  (**(code **)(*plVar1 + lVar2))();
LAB_1005c8149:
  operator_delete(param_1);
  return;
}

