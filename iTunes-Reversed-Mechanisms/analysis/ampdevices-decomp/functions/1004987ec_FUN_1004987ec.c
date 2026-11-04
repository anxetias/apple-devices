// name: FUN_1004987ec
// address: 1004987ec

void FUN_1004987ec(long param_1,long param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long local_70;
  long local_68;
  long local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 local_4c;
  undefined8 local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_70 = param_2;
  local_60 = param_1;
  if (param_1 != 0) {
    cVar1 = FUN_100495380(*(undefined8 *)(param_1 + 0x10));
    if (cVar1 != '\0') {
      lVar4 = *(long *)(param_1 + 0x20);
      if (lVar4 != param_2) {
        plVar6 = *(long **)(*(long *)(param_1 + 0x10) + 0x13d8);
        if (lVar4 != 0 && plVar6 != (long *)0x0) {
          lVar5 = *plVar6;
          local_68 = *(long *)(param_1 + 0x10);
          lVar2 = FUN_10049c6ea(lVar5,*(undefined4 *)((long)plVar6 + 0xc),lVar4);
          if (lVar2 == 0) {
            lVar2 = 0;
          }
          else {
            lVar2 = *(long *)(lVar2 + 8);
          }
          if (lVar2 != param_1) {
            uVar3 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar3,0x10);
            if (cVar1 != '\0') {
              local_58 = 0x8220202;
              uStack_54 = 0x7a0a90;
              uStack_50 = 1;
              local_4c = 0x822;
              local_4a = "imageLibrary->imageSourceIDMap->get(inImageInfo->sourceID) == inImageInfo"
              ;
              __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_58,0x16);
            }
            FUN_1001782e9(0,0);
            plVar6 = *(long **)(local_68 + 0x13d8);
            lVar4 = *(long *)(param_1 + 0x20);
            lVar5 = *plVar6;
          }
          lVar4 = FUN_10049c5a2(plVar6,lVar4);
          if ((long)(int)plVar6[1] * 0x10 + lVar5 != lVar4) {
            FUN_10049c6a8(plVar6,lVar4);
            plVar6 = *(long **)(local_68 + 0x13d8);
            param_2 = local_70;
            param_1 = local_60;
          }
        }
        *(long *)(param_1 + 0x20) = param_2;
        if (param_2 != 0 && plVar6 != (long *)0x0) {
          FUN_10049bea4(&local_58,plVar6,&local_70,&local_60);
          if (local_4a._2_1_ == '\0') {
            *(long *)(CONCAT44(uStack_54,local_58) + 8) = local_60;
          }
        }
      }
      goto LAB_10049889a;
    }
  }
  uVar3 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar3,0x10);
  if (cVar1 != '\0') {
    local_58 = 0x8220202;
    uStack_54 = 0x7a0a90;
    uStack_50 = 1;
    local_4c = 0x822;
    local_4a = "ITImageInfoIsValid(inImageInfo)";
    __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_58,0x16);
  }
  FUN_1001782e9(0,0);
LAB_10049889a:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

