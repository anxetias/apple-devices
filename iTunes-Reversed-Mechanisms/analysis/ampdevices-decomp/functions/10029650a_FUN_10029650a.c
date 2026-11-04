// name: FUN_10029650a
// address: 10029650a

/* WARNING: Type propagation algorithm not settling */

int FUN_10029650a(int param_1,undefined8 param_2,uint *param_3,ulong *param_4,undefined8 param_5,
                 undefined8 param_6,undefined8 param_7,undefined1 *param_8,undefined8 param_9,
                 undefined4 *param_10,undefined1 *param_11,char param_12)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  short sVar9;
  undefined1 *puVar10;
  uint *puVar11;
  undefined1 local_f4 [60];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 local_8e [2];
  char local_8c;
  char local_8b;
  uint *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulong *local_68;
  uint local_5c [2];
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_78 = (long *)0x0;
  uStack_70 = (long *)0x0;
  local_5c[0] = 0;
  if (param_10 != (undefined4 *)0x0) {
    *param_10 = 0;
  }
  if (param_11 != (undefined1 *)0x0) {
    *param_11 = 0;
  }
  puVar10 = param_8;
  if (param_8 == (undefined1 *)0x0) {
    puVar10 = local_f4;
  }
  local_a0 = param_5;
  local_98 = param_6;
  local_80 = param_3;
  local_68 = param_4;
  iVar7 = FUN_1002969d8(0,param_1,param_2,1,0,&local_78);
  if (iVar7 == -0x80) goto LAB_100296612;
  if (iVar7 != 0) {
    uVar8 = FUN_1001cc310();
    cVar6 = _os_log_type_enabled(uVar8,0x10);
    if (cVar6 == '\0') goto LAB_100296612;
    local_4a = (char *)CONCAT44(local_4a._4_4_,iVar7);
LAB_100296899:
    local_4c = 0x400;
    local_54 = "Assertion failure";
    local_5c[1] = 0x8220202;
    __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",local_5c + 1,0x12);
    goto LAB_100296612;
  }
  if ((param_1 == 0x46494c45) && (DAT_1008c7848 != 0)) {
    cVar6 = FUN_1001ee041();
    iVar7 = -0x2f;
    if (cVar6 == '\0') {
      uVar8 = FUN_1001cc310();
      cVar6 = _os_log_type_enabled(uVar8,0x10);
      if (cVar6 != '\0') {
        local_5c[1] = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "JRIsCurrentThreadPreemptive() == true";
        __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",local_5c + 1,0x16);
      }
      FUN_1001782e9(0,0);
    }
    goto LAB_100296612;
  }
  iVar7 = (**(code **)(*local_78 + 0x118))(local_78,1,64000);
  plVar1 = uStack_70;
  if (iVar7 == -0x80) goto LAB_100296612;
  if (iVar7 != 0) {
    uVar8 = FUN_1001cc310();
    cVar6 = _os_log_type_enabled(uVar8,0x10);
    if (cVar6 == '\0') goto LAB_100296612;
    local_4a = (char *)CONCAT44(local_4a._4_4_,iVar7);
    goto LAB_100296899;
  }
  local_b8 = (undefined4)local_78;
  uStack_b4 = local_78._4_4_;
  uStack_b0 = (undefined4)uStack_70;
  uStack_ac = uStack_70._4_4_;
  if (uStack_70 != (long *)0x0) {
    LOCK();
    uStack_70[1] = uStack_70[1] + 1;
    UNLOCK();
  }
  puVar11 = local_5c;
  if (param_12 == '\0') {
    puVar11 = (uint *)0x0;
  }
  iVar7 = FUN_100297013(&local_b8,0,local_8e,puVar10,puVar11,local_80,local_68,local_a0,local_98,
                        param_7,0,param_9,param_10,param_11);
  if (plVar1 != (long *)0x0) {
    LOCK();
    plVar2 = plVar1 + 1;
    lVar3 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (iVar7 == 0) {
    if (local_80 != (uint *)0x0) {
      uVar4 = *local_80;
      puVar10 = param_8;
      if (param_8 == (undefined1 *)0x0) {
        puVar10 = local_f4;
      }
      *local_80 = uVar4 | 0x18000;
      local_80[0x40a] = *(uint *)(puVar10 + 0x10);
      uVar5 = *(uint *)(puVar10 + 0xc);
      local_80[0x515] = (uint)(float)uVar5;
      local_80[0x40b] = uVar5 << 0x10;
      if (param_12 != '\0') {
        *local_80 = uVar4 | 0x18800;
        local_80[0x405] = local_5c[0];
      }
    }
    if (local_68 != (ulong *)0x0) {
      *local_68 = *local_68 | 0x1000000004;
      puVar10 = local_f4;
      if (param_8 != (undefined1 *)0x0) {
        puVar10 = param_8;
      }
      *(ushort *)((long)local_68 + 0x16) = (ushort)(byte)puVar10[5];
      *(undefined2 *)((long)local_68 + 0x1a) = 1;
      if (local_8c == '\0') {
        sVar9 = 0x12f;
LAB_1002968cb:
        if ((byte)(local_8b - 1U) < 3) {
          *(ushort *)((long)local_68 + 0x1a) = sVar9 + (ushort)(byte)(local_8b - 1U) * -100;
          goto LAB_100296742;
        }
      }
      else {
        if (local_8c == '\x02') {
          sVar9 = 0x12e;
          goto LAB_1002968cb;
        }
        if (local_8c == '\x03') {
          sVar9 = 0x12d;
          goto LAB_1002968cb;
        }
      }
      uVar8 = FUN_1001cc310();
      cVar6 = _os_log_type_enabled(uVar8,0x10);
      if (cVar6 != '\0') {
        local_5c[1] = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "itTrackInfoPriv->audioFormat != kITAudioFormat_Unknown";
        __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",local_5c + 1,0x16);
      }
      FUN_1001782e9(0,0);
    }
  }
LAB_100296742:
  (**(code **)(*local_78 + 0x1d0))();
LAB_100296612:
  if (uStack_70 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_70 + 1;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*uStack_70 + 0x10))(uStack_70);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar7;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

