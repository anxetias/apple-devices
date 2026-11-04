// name: FUN_1001c085a
// address: 1001c085a

void FUN_1001c085a(undefined8 *param_1,int param_2)

{
  uint uVar1;
  long *plVar2;
  void *pvVar3;
  ulong uVar4;
  long *plVar5;
  
  uVar1 = *(uint *)(param_1 + 1);
  plVar2 = (long *)*param_1;
  *(int *)(param_1 + 1) = param_2;
  *(int *)((long)param_1 + 0xc) = param_2 + -1;
  pvVar3 = _calloc((long)param_2,0x10);
  *param_1 = pvVar3;
  plVar5 = plVar2;
  for (uVar4 = (ulong)uVar1; uVar4 != 0; uVar4 = uVar4 - 1) {
    if (1 < *plVar5 + 1U) {
      FUN_1001c08c8(param_1,plVar5);
    }
    plVar5 = plVar5 + 2;
  }
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  _free(plVar2);
  return;
}

