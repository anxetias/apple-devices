// name: FUN_100547ee0
// address: 100547ee0

void FUN_100547ee0(long param_1)

{
  int *piVar1;
  void *pvVar2;
  long lVar3;
  void *pvVar4;
  char cVar5;
  
  if (*(long **)(param_1 + 0x38) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x38) + 0x1d0))();
    FUN_100295c56(param_1 + 0x38);
  }
  if (*(long **)(param_1 + 0x4c0) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x4c0) + 8))();
  }
  if (*(long *)(param_1 + 0x710) != 0) {
    FUN_10015cc72(param_1 + 0x710);
  }
  if (*(long *)(param_1 + 0x718) != 0) {
    FUN_1001c64c1();
  }
  if (*(long **)(param_1 + 0xf60) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xf60) + 0x28))();
  }
  if (*(long *)(param_1 + 0xf58) != 0) {
    FUN_1001c64c1();
  }
  pvVar2 = *(void **)(param_1 + 0x1018);
  if (pvVar2 != (void *)0x0) {
    FUN_1001273a0(pvVar2);
    operator_delete(pvVar2);
  }
  if (*(long *)(param_1 + 0x1450) != 0) {
    FUN_1001c652e();
  }
  *(undefined4 *)(param_1 + 0x6400) = 0;
  if (*(void **)(param_1 + 0x6408) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0x6408));
  }
  *(undefined8 *)(param_1 + 0x6408) = 0;
  FUN_100175848(*(undefined8 *)(param_1 + 0x6410));
  if (*(long *)(param_1 + 0x63e8) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x63e8) + 4);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1005d3cba();
    }
  }
  FUN_1003ae783(param_1 + 0x617c);
  lVar3 = *(long *)(param_1 + 0x4b8);
  if ((lVar3 != 0) && (*(long *)(lVar3 + 8) == param_1)) {
    *(undefined8 *)(lVar3 + 8) = 0;
  }
  FUN_1005da7d9(param_1 + 0x7f8);
  if (*(int *)(param_1 + 0x6490) != 0) {
    FUN_10017899c();
  }
  cVar5 = FUN_1001e9c23(param_1 + 0x6418);
  if (cVar5 != '\0') {
    FUN_1001e9d75(param_1 + 0x6418);
  }
  if (*(int *)(param_1 + 0x6460) == 0x61726179) {
    FUN_1005dca4e(param_1 + 0x6460,0,0);
  }
  pvVar2 = *(void **)(param_1 + 0xfe8);
  if (pvVar2 != (void *)0x0) {
    pvVar4 = *(void **)(param_1 + 0xff0);
    if (pvVar4 != pvVar2) {
      *(ulong *)(param_1 + 0xff0) =
           ((long)pvVar2 + (3 - (long)pvVar4) & 0xfffffffffffffffcU) + (long)pvVar4;
    }
    operator_delete(pvVar2);
    *(undefined8 *)(param_1 + 0xfe8) = 0;
    *(undefined8 *)(param_1 + 0xff0) = 0;
  }
  FUN_10021e316(param_1 + 0x38);
  if (*(long *)(param_1 + 0x30) != 0) {
    std::__shared_weak_count::__release_weak();
    return;
  }
  return;
}

