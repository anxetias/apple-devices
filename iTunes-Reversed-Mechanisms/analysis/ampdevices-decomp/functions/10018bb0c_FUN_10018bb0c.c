// name: FUN_10018bb0c
// address: 10018bb0c

undefined1  [16] FUN_10018bb0c(undefined2 *param_1,undefined2 *param_2,undefined2 *param_3)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  size_t sVar3;
  undefined1 auVar4 [16];
  
  puVar2 = param_3;
  if ((param_1 != param_2) && (puVar2 = param_1, param_2 != param_3)) {
    if (param_1 + 1 == param_2) {
      uVar1 = *param_1;
      sVar3 = (long)param_3 - (long)param_2;
      _memmove(param_1,param_1 + 1,sVar3);
      *(undefined2 *)((long)param_1 + sVar3) = uVar1;
      puVar2 = (undefined2 *)((long)param_1 + sVar3);
    }
    else if (param_2 + 1 == param_3) {
      uVar1 = param_3[-1];
      sVar3 = (long)param_3 + (-2 - (long)param_1);
      if (sVar3 != 0) {
        _memmove((undefined2 *)-(-2 - (long)param_1),param_1,sVar3);
      }
      *param_1 = uVar1;
      puVar2 = (undefined2 *)-(-2 - (long)param_1);
    }
    else {
      puVar2 = (undefined2 *)FUN_10018bbb5(param_1,param_2,param_3);
    }
  }
  auVar4._8_8_ = param_3;
  auVar4._0_8_ = puVar2;
  return auVar4;
}

