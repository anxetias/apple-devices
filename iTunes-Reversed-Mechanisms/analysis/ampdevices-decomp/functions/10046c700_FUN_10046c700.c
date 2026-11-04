// name: FUN_10046c700
// address: 10046c700

ulong FUN_10046c700(long param_1)

{
  byte bVar1;
  void *pvVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  char *pcVar8;
  undefined8 unaff_RBX;
  ulong uVar9;
  undefined2 local_48;
  undefined2 uStack_46;
  uint uStack_44;
  void *local_40;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  bVar1 = *(byte *)(param_1 + 0x70);
  uVar9 = CONCAT71((int7)((ulong)unaff_RBX >> 8),1);
  if (bVar1 < 4) goto LAB_10046c753;
  if (bVar1 - 6 < 2) {
LAB_10046c731:
    cVar3 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10);
    if (cVar3 != '\0') {
      local_48 = 0x100;
      uStack_46 = 0x400;
      uStack_44 = (uint)*(byte *)(param_1 + 0x70);
      __os_log_error_impl(0x100000000,PTR___os_log_default_10082cb88,0x10,
                          "not ready for shutdown; state %d",&local_48,8);
    }
  }
  else {
    if (bVar1 == 8) goto LAB_10046c753;
    cVar3 = FUN_1001c19cd();
    if (cVar3 != '\0') goto LAB_10046c731;
    iVar4 = FUN_100501dce(1);
    if (iVar4 == 0) {
      uVar5 = FUN_1005e9a2c();
      FUN_1005e76fc(&local_48,uVar5);
      pvVar2 = (void *)CONCAT44(uStack_44,CONCAT22(uStack_46,local_48));
      if (pvVar2 != (void *)0x0) {
        operator_delete(pvVar2);
      }
      if (pvVar2 == local_40) {
        cVar3 = FUN_1004afa71(0,1);
        if (cVar3 == '\0') {
          plVar6 = (long *)FUN_10039a28c();
          cVar3 = (**(code **)(*plVar6 + 0x28))(plVar6,0,0,0,0);
          if (cVar3 == '\0') {
            if (DAT_1008c77c0 == 0) goto LAB_10046c753;
            lVar7 = FUN_100171426(*(undefined8 *)(DAT_1008c77c0 + 0x70));
            if (lVar7 < 1) goto LAB_10046c753;
            cVar3 = _os_log_type_enabled(PTR___os_log_default_10082cb88,1);
            if (cVar3 != '\0') {
              pcVar8 = "not ready for shutdown; restore from backup in progress";
              goto LAB_10046c96b;
            }
          }
          else {
            cVar3 = _os_log_type_enabled(PTR___os_log_default_10082cb88,1);
            if (cVar3 != '\0') {
              pcVar8 = "not ready for shutdown; update/restore in progress";
              goto LAB_10046c96b;
            }
          }
        }
        else {
          cVar3 = _os_log_type_enabled(PTR___os_log_default_10082cb88,1);
          if (cVar3 != '\0') {
            pcVar8 = "not ready for shutdown; download in progress";
            goto LAB_10046c96b;
          }
        }
      }
      else {
        cVar3 = _os_log_type_enabled(PTR___os_log_default_10082cb88,1);
        if (cVar3 != '\0') {
          pcVar8 = "not ready for shutdown; connected recovery/dfu devices";
          goto LAB_10046c96b;
        }
      }
    }
    else {
      cVar3 = _os_log_type_enabled(PTR___os_log_default_10082cb88,1);
      if (cVar3 != '\0') {
        pcVar8 = "not ready for shutdown; connected devices";
LAB_10046c96b:
        local_48 = 0;
        __os_log_impl(0x100000000,PTR___os_log_default_10082cb88,1,pcVar8,&local_48,2);
      }
    }
  }
  uVar9 = 0;
LAB_10046c753:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar9 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

