// name: FUN_1001dedac
// address: 1001dedac

void FUN_1001dedac(undefined8 *param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  void *pvVar3;
  ulong uVar4;
  int *piVar5;
  
  uVar1 = *(uint *)(param_1 + 1);
  piVar2 = (int *)*param_1;
  *(int *)(param_1 + 1) = param_2;
  *(int *)((long)param_1 + 0xc) = param_2 + -1;
  pvVar3 = _calloc((long)param_2,8);
  *param_1 = pvVar3;
  piVar5 = piVar2;
  for (uVar4 = (ulong)uVar1; uVar4 != 0; uVar4 = uVar4 - 1) {
    if (1 < *piVar5 + 1U) {
      FUN_1001dee18(param_1,piVar5);
    }
    piVar5 = piVar5 + 2;
  }
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  _free(piVar2);
  return;
}

