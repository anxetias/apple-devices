// name: FUN_1004b90bd
// address: 1004b90bd

bool FUN_1004b90bd(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  bool bVar7;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar2 = FUN_1004aa626();
  if ((cVar2 == '\0') || (*(char *)(param_1 + 0x778) != '\0')) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_4a = "( DownloadItem_IsValid(inItem) && ((inItem)->isContainer == false) )";
LAB_1004b92cb:
      local_4c = 0x822;
      uStack_50 = 1;
      uStack_54 = 0x7a0a90;
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  else {
    if (*(int *)(param_1 + 0x1304) == 0x68747470) {
      bVar7 = true;
      if ((*(long *)(param_1 + 7000) == 0) || (lVar6 = *(long *)(param_1 + 0x218), lVar6 == 0))
      goto LAB_1004b911e;
      lVar4 = *(long *)(param_1 + 0x1b60);
      if (lVar4 != -1) {
        cVar2 = FUN_1001679fe(lVar6,&cf_size,&local_58);
        puVar1 = PTR_cf_ETag_10083c4f0;
        bVar7 = false;
        if (((cVar2 == '\0') || (CONCAT44(uStack_54,local_58) != lVar4)) ||
           (bVar7 = true, (*(byte *)(param_1 + 0x7de) & 0x80) == 0)) goto LAB_1004b911e;
        lVar4 = FUN_100171a6c(*param_2,PTR_cf_ETag_10083c4f0);
        if (lVar4 != 0) {
          lVar5 = FUN_100171475(lVar6,puVar1);
          if (lVar5 != 0) {
            bVar7 = false;
            lVar5 = FUN_100173bb7(lVar4,lVar5,0);
            FUN_10017060f(lVar4);
            puVar1 = PTR_cf_Last_Modified_10083c4f8;
            if (lVar5 != 0) goto LAB_1004b911e;
            lVar4 = FUN_100171a6c(*param_2,PTR_cf_Last_Modified_10083c4f8);
            if (lVar4 == 0) goto LAB_1004b92fd;
            lVar6 = FUN_100171475(lVar6,puVar1);
            if (lVar6 != 0) {
              lVar6 = FUN_100173bb7(lVar4,lVar6,0);
              bVar7 = lVar6 == 0;
              FUN_10017060f(lVar4);
              goto LAB_1004b911e;
            }
          }
          FUN_10017060f(lVar4);
        }
      }
LAB_1004b92fd:
      bVar7 = false;
      goto LAB_1004b911e;
    }
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_4a = 
      "( ((inItem)->isContainer == false) && ((inItem)->leaf.downloadTransport.transportKind == kDownloadTransportKind_HTTP) )"
      ;
      goto LAB_1004b92cb;
    }
  }
  bVar7 = false;
  FUN_1001782e9(0,0);
LAB_1004b911e:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return bVar7;
}

