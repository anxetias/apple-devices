// name: FUN_1005dfb13
// address: 1005dfb13

undefined1 *
FUN_1005dfb13(char *param_1,uint param_2,char *param_3,char *param_4,undefined1 *param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined2 local_3c;
  undefined4 local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = 0;
  }
  if (param_2 < 7) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
  }
  else {
    if (*param_1 == '\x01') {
      if ((param_5 != (undefined1 *)0x0) &&
         (iVar2 = _FigH264Bridge_GetSPSFromAVCC(param_1,param_2,0,&local_48,&local_50), iVar2 == 0))
      {
        _FigH264Bridge_GetSPSIsInterlaced(CONCAT44(uStack_44,local_48),local_50,param_5);
      }
      *param_3 = param_1[1];
      *param_4 = param_1[3];
      puVar4 = (undefined1 *)0x0;
      goto LAB_1005dfc04;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
  }
  puVar4 = &DAT_ffffff30;
  if (cVar1 != '\0') {
    local_3a = 0xffffff30;
    local_3c = 0x400;
    uStack_40 = 1;
    uStack_44 = 0x7a0a90;
    local_48 = 0x8220202;
    puVar4 = &DAT_ffffff30;
    __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_48,0x12);
  }
LAB_1005dfc04:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

