// name: FUN_100360d56
// address: 100360d56

undefined4 * FUN_100360d56(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *local_68;
  undefined1 local_59;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (DAT_1008bdb10 != -1) {
    local_58 = &local_59;
    local_68 = &local_58;
    std::__call_once((ulong *)&DAT_1008bdb10,&local_68,FUN_100361aa0);
  }
  _memcpy(param_1,&DAT_1008bdb18,0x188);
  lVar3 = FUN_10015935e(param_2,param_3);
  if (lVar3 == 0) goto LAB_100360e8b;
  lVar4 = _CFGetTypeID(lVar3);
  lVar5 = _CFDictionaryGetTypeID();
  if (lVar4 == lVar5) {
    uVar2 = FUN_100167d66(lVar3,&cf_smartShuffleOptionsOptions);
    *param_1 = uVar2;
    uVar2 = FUN_100167d66(lVar3,&cf_smartShuffleOptionsActiveCategories);
    param_1[1] = uVar2;
    lVar4 = FUN_100166844(lVar3,&cf_smartShuffleOptionsCategoryWeights);
    if (lVar4 != 0) {
      lVar5 = FUN_10017076e(lVar4);
      if (lVar5 != 0x20) {
        uVar6 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar6,0x10);
        if (cVar1 != '\0') {
          local_58._0_4_ = 0x8220202;
          local_58._4_4_ = 0x7a0a90;
          uStack_50 = 1;
          local_4c = 0x822;
          local_4a = 
          "numWeights == (sizeof(smartShuffleOptions.categoryWeights) / sizeof(smartShuffleOptions.categoryWeights[0]))"
          ;
          __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
        if (lVar5 < 1) goto LAB_100360e83;
      }
      lVar7 = 0;
      do {
        uVar6 = FUN_1001655f2(lVar4,lVar7);
        *(undefined8 *)(param_1 + lVar7 * 2 + 2) = uVar6;
        lVar7 = lVar7 + 1;
      } while (lVar5 != lVar7);
    }
  }
LAB_100360e83:
  FUN_10017060f(lVar3);
LAB_100360e8b:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

