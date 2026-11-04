// name: FUN_10042803e
// address: 10042803e

undefined1 FUN_10042803e(char *param_1,int param_2,byte *param_3,int *param_4)

{
  char cVar1;
  ulong uVar2;
  undefined1 uVar3;
  int iVar4;
  undefined1 local_138;
  char acStack_137 [255];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 == (char *)0x0) || (param_2 < (int)(*param_3 + 5))) {
    uVar3 = 0;
  }
  else {
    local_138 = 0;
    if (*param_1 == '\0') {
      cVar1 = param_1[4];
      if (cVar1 == '\0') {
        uVar2 = 0;
      }
      else {
        param_2 = param_2 + -4;
        uVar2 = 0;
        do {
          acStack_137[uVar2] = cVar1;
          if (param_2 < 2) {
            uVar2 = (ulong)(byte)((char)uVar2 + 1);
            break;
          }
          if (uVar2 == 0xfe) {
            uVar2 = 0xff;
            break;
          }
          param_2 = param_2 + -1;
          cVar1 = param_1[uVar2 + 5];
          uVar2 = uVar2 + 1;
        } while (cVar1 != '\0');
      }
      local_138 = (undefined1)uVar2;
    }
    uVar3 = 0;
    cVar1 = FUN_1001df6e9(&local_138,param_3,0);
    iVar4 = -1;
    if (cVar1 != '\0') {
      cVar1 = FUN_100427e21(param_1 + 1);
      if (cVar1 == '\0') {
        uVar3 = 0;
      }
      else {
        iVar4 = *param_3 + 6;
        uVar3 = 1;
      }
    }
    *param_4 = iVar4;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar3;
}

