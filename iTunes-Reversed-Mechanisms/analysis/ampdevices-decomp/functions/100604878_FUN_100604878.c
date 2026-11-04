// name: FUN_100604878
// address: 100604878

void FUN_100604878(long param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (*(char *)(lVar1 + 0x3a2) != '\0') {
    for (puVar2 = *(undefined8 **)(param_2 + 0x58); puVar2 != (undefined8 *)0x0;
        puVar2 = (undefined8 *)*puVar2) {
      if (*(char *)((long)puVar2 + 0x45) == '\0') {
        lVar3 = FUN_1004eb21f(lVar1,puVar2,*(undefined1 *)(*(long *)(param_1 + 0x20) + 0x2b0),0,0,0,
                              0,0,0);
        *(long *)(param_1 + 0x3d8) = *(long *)(param_1 + 0x3d8) + lVar3;
      }
    }
  }
  FUN_1004737f5(param_2);
  return;
}

