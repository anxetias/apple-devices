// name: FUN_1002dd82f
// address: 1002dd82f

uint * FUN_1002dd82f(long param_1,char param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    lVar5 = 8;
  }
  else {
    lVar5 = (ulong)*(uint *)(param_1 + 0x98) * 8 + 8;
  }
  puVar4 = (uint *)FUN_1001c63e1(lVar5);
  if (puVar4 != (uint *)0x0) {
    *puVar4 = 0;
    if (param_2 == '\0') {
      iVar2 = FUN_1004924d1(param_1,&local_58,0,0,0);
      if (iVar2 == 0) {
        for (lVar5 = FUN_10048b21c(&local_58); lVar5 != 0; lVar5 = FUN_10048b2d4(lVar5)) {
          uVar6 = *(undefined8 *)(lVar5 + 0x18);
          uVar7 = *puVar4;
          *puVar4 = uVar7 + 1;
          *(undefined8 *)(puVar4 + (ulong)uVar7 * 2 + 2) = uVar6;
        }
      }
      FUN_100491edc(&local_58);
    }
    else {
      for (lVar5 = FUN_100315ede(param_1); lVar5 != 0; lVar5 = FUN_100316031(lVar5)) {
        uVar7 = *puVar4;
        *puVar4 = uVar7 + 1;
        *(long *)(puVar4 + (ulong)uVar7 * 2 + 2) = lVar5;
      }
      uVar7 = *puVar4;
      if (param_1 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(uint *)(param_1 + 0x98);
      }
      if (uVar7 != uVar3) {
        uVar6 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar6,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = 
          "lookupTable->numPlaylists == (((trackData) != nullptr) ? ((trackData)->numPlaylists) : 0)"
          ;
          __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
        uVar7 = *puVar4;
      }
      FUN_1001d26f2(puVar4 + 2,uVar7,FUN_1002dd9b8,0);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

