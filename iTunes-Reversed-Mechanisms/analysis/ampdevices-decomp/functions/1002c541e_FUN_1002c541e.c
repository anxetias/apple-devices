// name: FUN_1002c541e
// address: 1002c541e

int FUN_1002c541e(long param_1,undefined8 param_2,ulong param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  ulong local_b8;
  ulong uStack_b0;
  ulong local_a8;
  ulong uStack_a0;
  ulong local_98;
  ulong uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  ulong local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  int local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_68 = 0;
  if (0x53 < param_3) {
    param_3 = 0x54;
  }
  FUN_1001c631b(param_2,&local_b8,param_3);
  if (*(char *)(param_1 + 0x30) == '\x01') {
    FUN_1003e52a7(&local_b8);
  }
  local_60 = uStack_b0 >> 0x20;
  _sqlite3_mprintf("INSERT INTO video_characteristics (item_pid,sub_id,track_id,height,width,depth,codec,frame_rate,percentage_encrypted,bit_rate,peak_bit_rate,buffer_size,profile,level,complexity_level) VALUES (%lld,0,%u,%u,%u,%u,%u,%f,%f,%u,%u,%u,%u,%u,%d)"
                   ,SUB84((double)((float)(uStack_90 >> 0x20) / DAT_100717f3c),0),
                   (double)((float)(local_a8 & 0xffffffff) / DAT_100717f3c),
                   *(undefined8 *)(param_1 + 0x38),uStack_b0 & 0xffffffff,local_b8 & 0xffffffff,
                   local_b8 >> 0x20,0,local_60,local_a8 >> 0x20,uStack_a0 & 0xffffffff,
                   uStack_a0 >> 0x20,local_98 & 0xffffffff,local_98 >> 0x20,uStack_90 & 0xffffffff);
  iVar2 = FUN_100626ef4(*(undefined8 *)(param_1 + 0x10));
  if ((iVar2 != -0x80) && (iVar2 != 0)) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x400;
      local_4a = iVar2;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_58,0x12);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

