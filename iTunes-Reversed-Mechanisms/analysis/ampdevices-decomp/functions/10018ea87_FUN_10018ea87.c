// name: FUN_10018ea87
// address: 10018ea87

void FUN_10018ea87(long param_1)

{
  ulong uVar1;
  void *pvVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined1 local_6b8 [16];
  long local_6a8;
  undefined1 local_6a0 [16];
  void *local_690;
  long local_688;
  undefined1 local_680 [16];
  undefined1 local_670;
  undefined2 local_66f;
  undefined1 local_66c [516];
  undefined1 local_468 [4];
  undefined2 local_464;
  undefined1 local_450;
  undefined4 local_4c;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_690 = (void *)0x0;
  uVar4 = _getmntinfo_r_np_INODE64(&local_690,2);
  if (uVar4 == 0) {
    uVar6 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    if (cVar3 != '\0') {
      FUN_1006933de(uVar6);
    }
    FUN_1001782e9(0,0);
  }
  else if (0 < (int)uVar4) {
    local_6a8 = (ulong)uVar4 * 0x878;
    lVar7 = 0;
    local_688 = param_1;
    do {
      iVar5 = _strcmp((char *)((long)local_690 + lVar7 + 0x48),"devfs");
      if (iVar5 != 0) {
        ___bzero(local_680,0x648);
        FUN_1001b7a44(local_680);
        FUN_1001b7a44(local_6a0);
        pvVar2 = local_690;
        lVar8 = (long)local_690 + lVar7 + 0x58;
        FUN_1001b7b04(local_6b8,lVar8);
        FUN_1001b80b2(local_680,local_6b8);
        FUN_1001b7a50(local_6b8);
        local_670 = (*(uint *)((long)pvVar2 + lVar7 + 0x40) >> 0xc & 1) == 0;
        local_66f = 0x100;
        FUN_10018dce1(lVar8,local_468);
        local_4c = *(undefined4 *)((long)pvVar2 + lVar7 + 0x30);
        local_450 = 1;
        local_464 = 6;
        iVar5 = FUN_10018ed0d(local_468,local_6a0);
        if (iVar5 == 0) {
          FUN_1001bb41a(local_6a0,local_66c);
        }
        uVar1 = *(ulong *)(local_688 + 8);
        if (uVar1 < *(ulong *)(local_688 + 0x10)) {
          FUN_1001b7a5c(uVar1,local_680);
          _memcpy((void *)(uVar1 + 0x10),&local_670,0x638);
          lVar8 = uVar1 + 0x648;
          *(long *)(local_688 + 8) = lVar8;
        }
        else {
          lVar8 = FUN_100192e28(local_688,local_680);
        }
        *(long *)(local_688 + 8) = lVar8;
        FUN_1001b7a50(local_6a0);
        FUN_1001b7a50(local_680);
      }
      lVar7 = lVar7 + 0x878;
    } while (local_6a8 != lVar7);
  }
  _free(local_690);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

