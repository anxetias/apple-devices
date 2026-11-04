// name: FUN_1002e4d34
// address: 1002e4d34

bool FUN_1002e4d34(long param_1,long *param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  size_t sVar6;
  size_t sVar7;
  void *pvVar8;
  void *pvVar9;
  undefined8 uVar10;
  bool bVar11;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(long *)(param_1 + 0x10) == 0) {
    uVar10 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar10,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "TrackInfoIsValid(inTrackInfo)";
      __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
LAB_1002e4def:
    bVar11 = *param_2 == 0;
  }
  else {
    lVar3 = FUN_100481321(param_1,PTR_cf_artwork_data_100844ac0);
    if (lVar3 == 0) goto LAB_1002e4def;
    lVar4 = _CFDataGetTypeID();
    lVar5 = _CFGetTypeID(lVar3);
    if (lVar4 != lVar5) goto LAB_1002e4def;
    if (*param_2 == 0) {
      bVar11 = true;
      goto LAB_1002e4df6;
    }
    sVar6 = FUN_100170ef7(lVar3);
    sVar7 = FUN_1001a8610(param_2);
    if (sVar6 != sVar7) {
      bVar11 = false;
      goto LAB_1002e4df6;
    }
    pvVar8 = (void *)FUN_1001a8626(param_2);
    pvVar9 = (void *)FUN_100170f3b(lVar3);
    iVar2 = _memcmp(pvVar8,pvVar9,sVar6);
    bVar11 = iVar2 == 0;
  }
  bVar11 = !bVar11;
LAB_1002e4df6:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return bVar11;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

