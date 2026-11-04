// name: FUN_1004b0638
// address: 1004b0638

undefined8 FUN_1004b0638(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(char *)(param_1 + 0x778) != '\0') {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7a0a90;
      uStack_50 = 1;
      local_4c = 0x822;
      local_4a = "inItem->isContainer == false";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  if (*(int *)(param_1 + 0x1304) == 0x636f7079) {
    uVar4 = 0;
    goto LAB_1004b06dc;
  }
  uVar4 = 0xffffffce;
  if (*(int *)(param_1 + 0x1304) != 0x68747470) goto LAB_1004b06dc;
  if (*(char *)(param_1 + 0x778) != '\0') {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7a0a90;
      uStack_50 = 1;
      local_4c = 0x822;
      local_4a = 
      "( ((inItem)->isContainer == false) && ((inItem)->leaf.downloadTransport.transportKind == kDownloadTransportKind_HTTP) )"
      ;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_1004b06dc;
  }
  uVar3 = *(uint *)(param_1 + 0x7dc);
  if ((uVar3 >> 0x1e & 1) != 0) {
    lVar7 = *(long *)(param_1 + 0x1350);
    if (lVar7 != 0) {
      lVar6 = FUN_100171c1c(lVar7);
      if (lVar6 != 0) {
        FUN_100171502(param_2,&cf_headers,lVar6);
        FUN_10017060f(lVar6);
      }
      puVar1 = PTR_cf_ETag_10083c4f0;
      lVar6 = FUN_100171a6c(lVar7,PTR_cf_ETag_10083c4f0);
      if (lVar6 != 0) {
        FUN_100171502(param_2,puVar1,lVar6);
        FUN_10017060f(lVar6);
      }
      puVar1 = PTR_cf_Last_Modified_10083c4f8;
      lVar7 = FUN_100171a6c(lVar7,PTR_cf_Last_Modified_10083c4f8);
      if (lVar7 != 0) {
        FUN_100171502(param_2,puVar1,lVar7);
        FUN_10017060f(lVar7);
      }
    }
    uVar3 = *(uint *)(param_1 + 0x7dc);
  }
  uVar4 = 0;
  if (-1 < (int)uVar3) goto LAB_1004b06dc;
  local_58 = 0;
  uStack_54 = 0;
  if (*(long *)(param_1 + 0x1310) == 0) {
    FUN_100198282(*(undefined8 *)(param_1 + 0x1308),0,&local_58);
    if (CONCAT44(uStack_54,local_58) != 0) goto LAB_1004b07f7;
  }
  else {
LAB_1004b07f7:
    FUN_100171502(param_2,&cf_url);
  }
  lVar7 = FUN_1004aa733(param_1);
  if (lVar7 != 0) {
    FUN_100171502(param_2,&cf_final_url,lVar7);
  }
LAB_1004b06dc:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

