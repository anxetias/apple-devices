// name: FUN_1001b7eba
// address: 1001b7eba

void FUN_1001b7eba(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = FUN_1001ab132(param_2);
  if (lVar1 != 0) {
    plVar2 = operator_new(lVar1 * 2 + 0x10,(nothrow_t *)PTR_nothrow_10082c970);
    *plVar2 = lVar1;
    *(undefined4 *)(plVar2 + 1) = 1;
    *(undefined2 *)((long)plVar2 + lVar1 * 2 + 0xc) = 0;
    *param_1 = plVar2;
    FUN_1001ab148(param_2,(long)plVar2 + 0xc);
    return;
  }
  return;
}

