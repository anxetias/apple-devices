// name: FUN_100537450
// address: 100537450

int FUN_100537450(long param_1,undefined1 *param_2)

{
  void *pvVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  short sVar8;
  short sVar9;
  long lVar10;
  undefined1 *puVar11;
  undefined1 auVar12 [16];
  undefined1 local_14f0 [80];
  undefined4 local_14a0 [2];
  long local_1498;
  long local_1490 [2];
  undefined4 local_1480;
  int local_147c;
  undefined1 local_1478 [1056];
  undefined1 local_1058 [1024];
  undefined4 local_c58;
  char *local_c54;
  undefined2 local_c4c;
  char *local_c4a;
  undefined1 local_458 [1048];
  undefined8 uStack_40;
  long local_38;
  
  uStack_40 = 0x100537468;
  auVar12 = FUN_100108310();
  lVar2 = -auVar12._0_8_;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_147c = 0;
  if (((param_1 == 0) || (*(long *)(param_1 + 8) == 0)) ||
     (lVar10 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar10 == 0)) {
    *(undefined8 *)((long)&local_38 + lVar2) = 0x100537560;
    uVar5 = FUN_1001cc310();
    *(undefined8 *)((long)&local_38 + lVar2) = 0x100537570;
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_c58 = 0x8220202;
      local_c54 = "Assertion failure";
      local_c4c = 0x822;
      local_c4a = "TrackInstanceIsValid( trackInstance )";
      *(undefined8 *)((long)&local_38 + lVar2) = 0x1005377b0;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_c58,0x16);
    }
    *(undefined8 *)((long)&local_38 + lVar2) = 0x100537581;
    FUN_1001782e9(0,0);
    iVar4 = -0x32;
    goto LAB_100537742;
  }
  *(undefined8 *)((long)&local_38 + lVar2) = 0x1005374b8;
  FUN_100313e0b(lVar10);
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (param_2 == (undefined1 *)0x0) {
    uVar5 = *(undefined8 *)(param_1 + 0x80);
    param_2 = local_14f0;
    *(undefined8 *)((long)&local_38 + lVar2) = 0x1005375a3;
    local_147c = FUN_10017d477(uVar5,param_2,0);
    if (local_147c == 0) goto LAB_1005374c8;
  }
  else {
LAB_1005374c8:
    *(undefined8 *)((long)&local_38 + lVar2) = 0x1005374d0;
    FUN_1002ae6f7(param_1);
    *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_2 + 0x30);
    *(undefined4 *)(param_1 + 0xa8) = 0xffffffff;
    puVar11 = auVar12._8_8_;
    if (auVar12._8_8_ == (undefined1 *)0x0) {
      *(undefined8 *)((long)&local_38 + lVar2) = 0x100537501;
      iVar4 = FUN_10031fe30(param_1,local_1478,0);
      puVar11 = (undefined1 *)0x0;
      if (iVar4 == 0) {
        puVar11 = local_1478;
      }
    }
    uVar5 = *(undefined8 *)(param_1 + 0x80);
    *(undefined8 *)((long)&local_38 + lVar2) = 0x10053751f;
    uVar5 = FUN_1001703de(0,uVar5,&local_147c);
    *(undefined8 *)((long)&local_38 + lVar2) = 0x10053752e;
    FUN_1001a78d6(local_1490,uVar5);
    if (local_1490[0] == 0) {
      if (local_147c == 0) goto LAB_1005375c3;
    }
    else {
      *(undefined8 *)((long)&local_38 + lVar2) = 0x100537547;
      local_147c = FUN_1002b482f(param_1,local_1490);
      if (local_147c == 0) {
        *(byte *)(param_1 + 0x48) = *(byte *)(param_1 + 0x48) & 0xfd;
LAB_1005375c3:
        uVar5 = *(undefined8 *)(param_1 + 8);
        *(undefined8 *)((long)&local_38 + lVar2) = 0x1005375cc;
        FUN_1002fef76(uVar5);
        *(undefined8 *)((long)&local_38 + lVar2) = 0x1005375db;
        iVar4 = FUN_1002b1039(param_1,local_458);
        if (iVar4 == 0) {
          *(undefined8 *)((long)&local_38 + lVar2) = 0x1005375f9;
          lVar6 = FUN_10016ff43(DAT_1008c4d90,local_458);
          if (lVar6 != 0) {
            *(undefined8 *)((long)&local_38 + lVar2) = 0x100537609;
            lVar7 = FUN_100174746(lVar6);
            if (lVar7 != 0) {
              *(undefined8 *)((long)&local_38 + lVar2) = 0x100537629;
              iVar4 = FUN_1001e5ca8(lVar7,&local_c58,0x400,&local_1480);
              if (iVar4 == 0) {
                *(undefined8 *)((long)&local_38 + lVar2) = 0x100537652;
                iVar4 = FUN_1001e73f2(&local_c58,local_1480,local_1058,0x400,local_14a0);
                if (iVar4 == 0) {
                  *(undefined8 *)((long)&local_38 + lVar2) = 0x10053766b;
                  FUN_1002b4ba4(param_1,local_1058,local_14a0[0]);
                }
              }
            }
            *(undefined8 *)((long)&local_38 + lVar2) = 0x100537673;
            FUN_10017060f(lVar6);
          }
        }
        if (puVar11 != (undefined1 *)0x0) {
          *(undefined8 *)((long)&local_38 + lVar2) = 0x10053769a;
          local_1498 = lVar10;
          _memcpy(&local_c58,puVar11,0x420);
          sVar8 = 1;
          do {
            *(undefined8 *)((long)&local_38 + lVar2) = 0x1005376b1;
            iVar4 = FUN_10017d5ba(&local_c58,&local_c58);
            lVar10 = local_1498;
            if (iVar4 != 0) break;
            pvVar1 = *(void **)(param_1 + 0x80);
            *(undefined8 *)((long)&local_38 + lVar2) = 0x1005376c9;
            _memcpy(local_458,pvVar1,0x420);
            sVar9 = 1;
            while( true ) {
              *(undefined8 *)((long)&local_38 + lVar2) = 0x1005376d9;
              iVar4 = FUN_10017d5ba(local_458,local_458);
              if (iVar4 != 0) break;
              *(undefined8 *)((long)&local_38 + lVar2) = 0x1005376e8;
              cVar3 = FUN_10017f77e(local_458,&local_c58);
              if (cVar3 != '\0') {
                *(short *)(param_1 + 0xa8) = sVar9;
                *(short *)(param_1 + 0xaa) = sVar8;
                goto LAB_10053770b;
              }
              sVar9 = sVar9 + 1;
            }
            sVar9 = *(short *)(param_1 + 0xa8);
LAB_10053770b:
            sVar8 = sVar8 + 1;
            lVar10 = local_1498;
          } while (sVar9 == 0);
        }
      }
    }
    *(undefined8 *)((long)&local_38 + lVar2) = 0x100537727;
    FUN_1001a85d4(local_1490);
  }
  *(undefined8 *)((long)&local_38 + lVar2) = 0x100537734;
  FUN_1002b532a(param_1,0xf);
  *(undefined8 *)((long)&local_38 + lVar2) = 0x10053773c;
  FUN_1002fbbfc(lVar10);
  iVar4 = local_147c;
LAB_100537742:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)((long)&local_38 + lVar2) = &UNK_1005377ba;
    ___stack_chk_fail();
  }
  return iVar4;
}

