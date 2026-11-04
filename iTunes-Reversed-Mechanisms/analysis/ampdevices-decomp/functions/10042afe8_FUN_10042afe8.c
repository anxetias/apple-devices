// name: FUN_10042afe8
// address: 10042afe8

undefined4 FUN_10042afe8(long param_1,int param_2,undefined1 *param_3)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  long *plVar4;
  undefined4 local_34;
  
  if (*(long **)(param_1 + 0x28) == (long *)0x0) {
    local_34 = 0xffffffd5;
  }
  else {
    local_34 = 0xffffffd5;
    plVar4 = *(long **)(param_1 + 0x28);
    do {
      plVar1 = (long *)*plVar4;
      if ((int)plVar4[1] == param_2) {
        lVar3 = 0;
        do {
          if (*(char *)((long)plVar4 + lVar3 + 0x12) == '\0') {
            if (param_3 == (undefined1 *)0x0 && (int)lVar3 == 0) goto LAB_10042b07b;
            break;
          }
          lVar3 = lVar3 + 1;
        } while ((int)lVar3 < *(int *)((long)plVar4 + 0xc));
        if ((param_3 != (undefined1 *)0x0) &&
           (cVar2 = FUN_1001df8db(param_3 + 1,*param_3,(long)plVar4 + 0x12,(long)(int)lVar3,0),
           cVar2 != '\0')) {
LAB_10042b07b:
          *(int *)(param_1 + 0xe) =
               *(int *)(param_1 + 0xe) - (*(int *)(param_1 + 0x20) + *(int *)((long)plVar4 + 0xc));
          FUN_1001c2502(param_1 + 0x28,plVar4);
          FUN_1001c64c1(plVar4);
          local_34 = 0;
        }
      }
      plVar4 = plVar1;
    } while (plVar1 != (long *)0x0);
  }
  return local_34;
}

