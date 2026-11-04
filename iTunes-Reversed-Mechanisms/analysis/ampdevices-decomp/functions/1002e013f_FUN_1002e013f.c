// name: FUN_1002e013f
// address: 1002e013f

void FUN_1002e013f(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_138;
  undefined4 local_130;
  undefined2 local_12c;
  undefined2 uStack_12a;
  undefined6 local_128;
  undefined2 uStack_122;
  code *local_120;
  code *local_118;
  long local_110;
  undefined4 local_108;
  code *local_100;
  code *local_f8;
  code *local_f0;
  long local_e8;
  undefined4 local_e0;
  code *local_d8;
  code *local_d0;
  code *local_c8;
  long local_c0;
  undefined4 local_b8;
  code *local_b0;
  code *local_a8;
  code *local_a0;
  long local_98;
  undefined4 local_90;
  code *local_88;
  code *local_80;
  code *local_78;
  long local_70;
  undefined4 local_68;
  code *local_60;
  code *local_58;
  code *local_50;
  long local_48;
  undefined4 local_40;
  code *local_38;
  code *local_30;
  code *local_28;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
LAB_1002e023c:
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_138._0_2_ = 0x202;
      local_138._2_2_ = 0x822;
      local_138._4_4_ = 0x7a0a90;
      local_130 = 1;
      local_12c = 0x822;
      uStack_12a = 0x63b4;
      local_128 = 0x1007b;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_138,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_1002e0468;
  }
  if (*(int *)(param_1 + 0x80) != 0x74646174) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_138._0_2_ = 0x202;
      local_138._2_2_ = 0x822;
      local_138._4_4_ = 0x7ab58c;
      local_130 = 1;
      local_12c = 0x822;
      uStack_12a = 0xec03;
      local_128 = 0x1007a;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_138,0x16);
    }
    cVar1 = FUN_1001782e9(0,1);
    if (cVar1 == '\0') goto LAB_1002e023c;
  }
  uVar2 = FUN_10025b8e3();
  cVar1 = _os_signpost_enabled(uVar2);
  if (cVar1 != '\0') {
    local_138._0_2_ = 0;
    __os_signpost_emit_with_name_impl
              (0x100000000,uVar2,1,0xeeeeb0b5b2b2eeee,"db_sort_orders","",&local_138,2);
  }
  FUN_1003071cd(param_1);
  local_138._0_2_ = 0x2a90;
  local_138._2_2_ = 0x85;
  local_138._4_4_ = 1;
  local_118 = (code *)&local_138;
  FUN_1002f9b73(param_1);
  if (local_118 == (code *)&local_138) {
    lVar3 = 0x20;
LAB_1002e026c:
    (**(code **)(*(long *)local_118 + lVar3))();
  }
  else {
    lVar3 = 0x28;
    if (local_118 != (code *)0x0) goto LAB_1002e026c;
  }
  local_138._0_2_ = (undefined2)param_1;
  local_138._2_2_ = (undefined2)((ulong)param_1 >> 0x10);
  local_138._4_4_ = (undefined4)((ulong)param_1 >> 0x20);
  local_130 = 4;
  local_128 = 0x1002e008b;
  uStack_122 = 0;
  local_120 = FUN_1002e0097;
  local_118 = FUN_100477ed1;
  local_108 = 3;
  local_100 = FUN_1002e00a3;
  local_f8 = FUN_1002e00af;
  local_f0 = FUN_1004778bb;
  local_e0 = 2;
  local_d8 = FUN_1002e00bb;
  local_d0 = FUN_1002e00c7;
  local_c8 = FUN_100477006;
  local_b8 = 8;
  local_b0 = FUN_1002e00d3;
  local_a8 = FUN_1002e00df;
  local_a0 = FUN_10047a94e;
  local_90 = 0x12;
  local_88 = FUN_1002e00eb;
  local_80 = FUN_1002e00f7;
  local_78 = FUN_10047a5cd;
  local_68 = 0x47;
  local_60 = FUN_1002e0103;
  local_58 = FUN_1002e010f;
  local_50 = FUN_10047857c;
  local_40 = 0xc2;
  local_38 = FUN_1002e011b;
  local_30 = FUN_1002e0127;
  local_28 = FUN_1002e0133;
  local_110 = param_1;
  local_e8 = param_1;
  local_c0 = param_1;
  local_98 = param_1;
  local_70 = param_1;
  local_48 = param_1;
  _dispatch_apply_f(7,(dispatch_queue_t)0x0,&local_138,FUN_1002e0560);
  FUN_100307383(param_1);
  uVar2 = FUN_10048604a(param_1);
  FUN_100380783(uVar2);
  uVar2 = FUN_10025b8e3();
  cVar1 = _os_signpost_enabled(uVar2);
  if (cVar1 != '\0') {
    local_138._0_2_ = 0;
    __os_signpost_emit_with_name_impl
              (0x100000000,uVar2,2,0xeeeeb0b5b2b2eeee,"db_sort_orders","",&local_138,2);
  }
LAB_1002e0468:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

