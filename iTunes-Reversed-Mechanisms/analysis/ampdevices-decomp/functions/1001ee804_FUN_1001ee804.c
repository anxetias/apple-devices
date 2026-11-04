// name: FUN_1001ee804
// address: 1001ee804

undefined8 FUN_1001ee804(long *param_1)

{
  long *plVar1;
  int iVar2;
  pthread_t p_Var3;
  long lVar4;
  
  if (*(char *)((long)param_1 + 0x41) != '\0') {
    _pthread_setname_np((char *)((long)param_1 + 0x41));
  }
  if (((char)param_1[8] == '\x01') && (iVar2 = _setpriority(3,0,0x1000), iVar2 != 0)) {
    p_Var3 = _pthread_self();
    FUN_1001ee0ac(p_Var3,0xffffffff);
  }
  if ((long *)param_1[4] == (long *)0x0) {
    (*(code *)param_1[6])(param_1[7]);
  }
  else {
    (**(code **)(*(long *)param_1[4] + 0x30))();
  }
  plVar1 = (long *)param_1[4];
  if (plVar1 == param_1) {
    lVar4 = 0x20;
  }
  else {
    lVar4 = 0x28;
    if (plVar1 == (long *)0x0) goto LAB_1001ee881;
  }
  (**(code **)(*plVar1 + lVar4))();
LAB_1001ee881:
  operator_delete(param_1);
  return 0;
}

