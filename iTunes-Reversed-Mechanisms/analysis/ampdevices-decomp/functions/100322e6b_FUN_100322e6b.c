// name: FUN_100322e6b
// address: 100322e6b

int FUN_100322e6b(long param_1,undefined8 param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  undefined1 uVar10;
  char cVar11;
  int iVar12;
  undefined4 uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined4 *puVar16;
  undefined4 local_12b8;
  char *local_12b4;
  undefined2 local_12ac;
  int local_12aa;
  undefined4 local_1298;
  char *local_1294;
  undefined2 local_128c;
  int local_128a;
  undefined1 local_1098 [512];
  undefined1 local_e98 [1056];
  undefined4 local_a78;
  char *local_a74;
  undefined2 local_a6c;
  char *local_a6a;
  undefined1 local_658 [32];
  undefined1 local_638 [512];
  undefined1 local_438 [512];
  undefined1 local_238 [464];
  ulong auStack_68 [7];
  
  auStack_68[5] = 0x100322e83;
  lVar14 = FUN_100108310();
  lVar14 = -lVar14;
  auStack_68[6] = *(ulong *)PTR____stack_chk_guard_10082cb58;
  lVar8 = *(long *)(param_1 + 8);
  if ((lVar8 == 0) || (lVar9 = *(long *)(lVar8 + 0x10), lVar9 == 0)) {
    *(undefined8 *)((long)auStack_68 + lVar14 + 0x30) = 0x100323095;
    uVar15 = FUN_1001cc310();
    *(undefined8 *)((long)auStack_68 + lVar14 + 0x30) = 0x1003230a5;
    cVar11 = _os_log_type_enabled(uVar15,0x10);
    if (cVar11 != '\0') {
      local_a78 = 0x8220202;
      local_a74 = "Assertion failure";
      local_a6c = 0x822;
      local_a6a = "TrackInstanceIsValid(inTrackInstance)";
      *(undefined8 *)((long)auStack_68 + lVar14 + 0x30) = 0x1003231d3;
      __os_log_error_impl(0x100000000,uVar15,0x10,"%{public}s: (%{public}s)",&local_a78,0x16);
    }
    *(undefined8 *)((long)auStack_68 + lVar14 + 0x30) = 0x1003230b6;
    FUN_1001782e9(0,0);
    iVar12 = -0x32;
  }
  else {
    *(undefined8 *)((long)auStack_68 + lVar14 + 0x30) = 0x100322ec2;
    iVar12 = FUN_1002b4324();
    if (iVar12 != -0x80) {
      if (iVar12 == 0) {
        *(undefined8 *)((long)auStack_68 + lVar14 + 0x30) = 0x100322ee4;
        FUN_100476928(lVar8,local_1098);
        *(undefined8 *)((long)auStack_68 + lVar14 + 0x30) = 0x100322ef3;
        FUN_1004779ac(lVar8,local_238);
        *(undefined8 *)((long)auStack_68 + lVar14 + 0x30) = 0x100322f02;
        FUN_1004772c4(lVar8,local_438);
        *(undefined8 *)((long)auStack_68 + lVar14 + 0x30) = 0x100322f11;
        FUN_10047dc87(lVar8,local_638);
        *(undefined8 *)((long)auStack_68 + lVar14 + 0x30) = 0x100322f1b;
        uVar13 = FUN_1004744bf(lVar8,0);
        uVar5 = *(uint *)(*(long *)(lVar8 + 0x78) + 0xc);
        uVar6 = *(uint *)(lVar8 + 0xc2);
        uVar7 = *(uint *)(param_1 + 0x48);
        *(undefined4 **)((long)auStack_68 + lVar14 + 0x28) = &local_a78;
        *(undefined8 *)((long)auStack_68 + lVar14 + 0x20) = 0;
        *(ulong *)((long)auStack_68 + lVar14 + 0x18) = (ulong)(uVar7 >> 0x13 & 1);
        *(ulong *)((long)auStack_68 + lVar14 + 0x10) = (ulong)(uVar6 >> 10 & 1);
        *(ulong *)((long)auStack_68 + lVar14 + 8) = (ulong)uVar5;
        *(undefined8 *)((long)auStack_68 + lVar14) = 0x100322f77;
        iVar12 = FUN_100534237(param_2,uVar13,local_1098,local_238,local_438,local_638);
        if (iVar12 == -0x80) goto LAB_1003230bb;
        if (iVar12 == 0) {
          *(undefined8 *)((long)auStack_68 + lVar14 + 0x30) = 0x100322fa5;
          FUN_10030c4f9(param_1,local_658,0x20);
          uVar1 = *(undefined2 *)(lVar8 + 0x13a);
          uVar2 = *(undefined2 *)(lVar8 + 0x13c);
          uVar3 = *(undefined2 *)(lVar8 + 0x136);
          uVar4 = *(undefined2 *)(*(long *)(param_1 + 0x18) + 2);
          *(undefined4 **)((long)auStack_68 + lVar14 + 0x28) = &local_1298;
          *(undefined8 *)((long)auStack_68 + lVar14 + 0x20) = 0x100322fe4;
          iVar12 = FUN_1005363fe(local_1098,uVar1,uVar2,uVar3,uVar4,local_658);
          if (iVar12 == -0x80) goto LAB_1003230bb;
          if (iVar12 == 0) {
            *(undefined8 *)((long)auStack_68 + lVar14 + 0x30) = 0x100323003;
            uVar10 = FUN_100474865(lVar8);
            *(undefined8 *)((long)auStack_68 + lVar14 + 0x28) = 0;
            *(undefined8 *)((long)auStack_68 + lVar14 + 0x30) = 0;
            *(undefined8 *)((long)auStack_68 + lVar14 + 0x20) = 0x100323031;
            iVar12 = FUN_100535910(lVar9,uVar10,param_2,local_e98,&local_a78,&local_1298);
            if ((iVar12 == -0x80) || (iVar12 == 0)) goto LAB_1003230bb;
            *(undefined8 *)((long)auStack_68 + lVar14 + 0x30) = 0x100323045;
            uVar15 = FUN_1001cc310();
            *(undefined8 *)((long)auStack_68 + lVar14 + 0x30) = 0x100323055;
            cVar11 = _os_log_type_enabled(uVar15,0x10);
            if (cVar11 == '\0') goto LAB_1003230bb;
            puVar16 = &local_12b8;
            local_12b8 = 0x8220202;
            local_12b4 = "Assertion failure";
            local_12ac = 0x400;
            local_12aa = iVar12;
          }
          else {
            *(undefined8 *)((long)auStack_68 + lVar14 + 0x30) = 0x1003231dd;
            uVar15 = FUN_1001cc310();
            *(undefined8 *)((long)auStack_68 + lVar14 + 0x30) = 0x1003231ed;
            cVar11 = _os_log_type_enabled(uVar15,0x10);
            if (cVar11 == '\0') goto LAB_1003230bb;
            puVar16 = &local_12b8;
            local_12b8 = 0x8220202;
            local_12b4 = "Assertion failure";
            local_12ac = 0x400;
            local_12aa = iVar12;
          }
        }
        else {
          *(undefined8 *)((long)auStack_68 + lVar14 + 0x30) = 0x100323138;
          uVar15 = FUN_1001cc310();
          *(undefined8 *)((long)auStack_68 + lVar14 + 0x30) = 0x100323148;
          cVar11 = _os_log_type_enabled(uVar15,0x10);
          if (cVar11 == '\0') goto LAB_1003230bb;
          puVar16 = &local_1298;
          local_1298 = 0x8220202;
          local_1294 = "Assertion failure";
          local_128c = 0x400;
          local_128a = iVar12;
        }
      }
      else {
        *(undefined8 *)((long)auStack_68 + lVar14 + 0x30) = 0x1003230e8;
        uVar15 = FUN_1001cc310();
        *(undefined8 *)((long)auStack_68 + lVar14 + 0x30) = 0x1003230f8;
        cVar11 = _os_log_type_enabled(uVar15,0x10);
        if (cVar11 == '\0') goto LAB_1003230bb;
        puVar16 = &local_a78;
        local_a78 = 0x8220202;
        local_a74 = "Assertion failure";
        local_a6c = 0x400;
        local_a6a = (char *)CONCAT44(local_a6a._4_4_,iVar12);
      }
      *(undefined8 *)((long)auStack_68 + lVar14 + 0x30) = 0x10032323a;
      __os_log_error_impl(0x100000000,uVar15,0x10,"%{public}s: err == (%d)",puVar16,0x12);
    }
  }
LAB_1003230bb:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == auStack_68[6]) {
    return iVar12;
  }
                    /* WARNING: Subroutine does not return */
  *(code **)((long)auStack_68 + lVar14 + 0x30) = FUN_100323244;
  ___stack_chk_fail();
}

