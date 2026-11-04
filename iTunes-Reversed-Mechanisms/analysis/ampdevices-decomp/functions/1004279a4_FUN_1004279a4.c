// name: FUN_1004279a4
// address: 1004279a4

void FUN_1004279a4(undefined8 param_1,undefined1 param_2,undefined8 param_3,int param_4,
                  undefined8 *param_5)

{
  undefined2 *puVar1;
  uint local_34;
  
  if ((param_5 != (undefined8 *)0x0) && (*param_5 = 0, 0 < param_4)) {
    puVar1 = (undefined2 *)FUN_1001c63e1(param_4 * 2 + 2);
    if (puVar1 != (undefined2 *)0x0) {
      *puVar1 = 0;
      FUN_100427a34(param_1,param_2,param_3,param_4,puVar1,param_4,&local_34);
      puVar1[local_34] = 0;
    }
    *param_5 = puVar1;
  }
  return;
}

