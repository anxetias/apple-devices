// name: FUN_1001908f1
// address: 1001908f1

int FUN_1001908f1(void *param_1,undefined8 param_2,int param_3,void *param_4,char *param_5,
                 undefined8 param_6)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  char *pcVar5;
  long lVar6;
  long lVar7;
  char local_8e8 [80];
  long local_898;
  long lStack_890;
  undefined8 local_888;
  long *local_878;
  long local_870;
  void *local_868;
  undefined8 local_860;
  char local_858 [1024];
  undefined1 local_458 [1056];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_868 = param_4;
  local_860 = param_6;
  if (param_1 == (void *)0x0) {
    if (param_3 != 0) goto LAB_1001909ba;
  }
  else {
    _memcpy(local_458,param_1,0x420);
    if (param_3 == 0) {
      pcVar5 = local_8e8;
      if (param_5 != (char *)0x0) {
        pcVar5 = param_5;
      }
      iVar3 = FUN_10017d477(local_458,pcVar5,local_860);
      if (iVar3 == -0x80) goto LAB_100190c48;
      if (iVar3 != 0) {
        uVar4 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 != '\0') {
          FUN_100693dda(iVar3,uVar4);
        }
        goto LAB_100190c48;
      }
      if (*pcVar5 == '\0') {
        uVar4 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 != '\0') {
          FUN_100693d64(uVar4);
        }
        FUN_1001782e9(0,0);
        goto LAB_100190ab1;
      }
    }
    else {
      iVar3 = FUN_10017d477(local_458,local_8e8,0);
      if (iVar3 == -0x80) goto LAB_100190c48;
      if (iVar3 != 0) {
        uVar4 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 != '\0') {
          FUN_100693cf8(iVar3,uVar4);
        }
        goto LAB_100190c48;
      }
      if (local_8e8[0] == '\0') {
        uVar4 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 != '\0') {
          FUN_100693c82(uVar4);
        }
        FUN_1001782e9(0,0);
LAB_100190ab1:
        iVar3 = -0x57f;
        goto LAB_100190c48;
      }
LAB_1001909ba:
      iVar3 = FUN_1001e73f2(param_2,param_3,local_858,0x400,&local_870);
      if (iVar3 == -0x80) goto LAB_100190c48;
      if (iVar3 != 0) {
        uVar4 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 != '\0') {
          FUN_100693e46(iVar3,uVar4);
        }
        goto LAB_100190c48;
      }
      local_858[local_870] = '\0';
      if (param_1 == (void *)0x0) {
        if ((local_870 != 0) && (local_858[0] != '/')) {
          local_898 = 0;
          lStack_890 = 0;
          local_888 = 0;
          FUN_10018ea87();
          lVar1 = lStack_890;
          if (local_898 != lStack_890) {
            lVar6 = local_898 + 0x16;
            do {
              cVar2 = FUN_1001e339d(lVar6,*(undefined2 *)(lVar6 + -2),param_2,param_3,0);
              if (cVar2 != '\0') {
                uVar4 = FUN_1001b83ae(lVar6 + -0x16);
                FUN_1001dfbb3(uVar4,local_858,0x400);
                break;
              }
              lVar7 = lVar6 + 0x632;
              lVar6 = lVar6 + 0x648;
            } while (lVar7 != lVar1);
          }
          local_878 = &local_898;
          FUN_100161f2a();
        }
        FUN_10018dce1(local_858,local_458);
        pcVar5 = local_8e8;
        if (param_5 != (char *)0x0) {
          pcVar5 = param_5;
        }
        iVar3 = FUN_10017d477(local_458,pcVar5,local_860);
      }
      else {
        FUN_10019212e((long)param_1 + 0x19,local_858,local_458);
        pcVar5 = local_8e8;
        if (param_5 != (char *)0x0) {
          pcVar5 = param_5;
        }
        iVar3 = FUN_10017d477(local_458,pcVar5,local_860);
      }
      if (iVar3 != 0) goto LAB_100190c48;
    }
  }
  _memcpy(local_868,local_458,0x420);
  iVar3 = 0;
LAB_100190c48:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}

