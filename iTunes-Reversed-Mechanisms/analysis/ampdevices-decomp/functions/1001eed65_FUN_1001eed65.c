// name: FUN_1001eed65
// address: 1001eed65

undefined8 FUN_1001eed65(long *param_1)

{
  long *plVar1;
  void *pvVar2;
  long lVar3;
  
  if (*param_1 == 0) {
    return 0;
  }
  FUN_1001e9de0(&DAT_1008c5428);
  pvVar2 = (void *)FUN_1001eee40(*param_1);
  if (pvVar2 == (void *)0x0) goto LAB_1001eee26;
  FUN_1001ef510(&DAT_1008a2b48,pvVar2);
  if (*(long *)((long)pvVar2 + 0x80) != 0) {
    FUN_100172be4(*(undefined8 *)((long)pvVar2 + 0x78),*(long *)((long)pvVar2 + 0x80),
                  *(undefined8 *)PTR__kCFRunLoopCommonModes_10082e110);
    FUN_10017060f(*(undefined8 *)((long)pvVar2 + 0x80));
    *(undefined8 *)((long)pvVar2 + 0x80) = 0;
  }
  FUN_10017060f(*(undefined8 *)((long)pvVar2 + 0x78));
  *(undefined8 *)((long)pvVar2 + 0x78) = 0;
  *(undefined4 *)((long)pvVar2 + 8) = 0;
  plVar1 = *(long **)((long)pvVar2 + 0x40);
  if (plVar1 == (long *)((long)pvVar2 + 0x20)) {
    lVar3 = 0x20;
LAB_1001eee18:
    (**(code **)(*plVar1 + lVar3))();
  }
  else {
    lVar3 = 0x28;
    if (plVar1 != (long *)0x0) goto LAB_1001eee18;
  }
  operator_delete(pvVar2);
LAB_1001eee26:
  FUN_1001e9eb9(&DAT_1008c5428);
  *param_1 = 0;
  return 0;
}

