// name: FUN_1001064f5
// address: 1001064f5

void FUN_1001064f5(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined1 *local_158;
  undefined1 *local_150;
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138 [256];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar1 = (uint)(*(byte *)(param_2 + 0x19f4) >> 1);
  FUN_100106ed9(param_1,*(undefined8 *)(param_2 + 0x1920),*(undefined8 *)(param_2 + 0x1918),uVar1);
  (**(code **)(param_2 + 0x19e8))(param_1,param_1,1);
  FUN_100106fd7(param_1,*(undefined8 *)(param_2 + 0x1928),param_2 + 0x1960,uVar1);
  uVar2 = (ulong)(uVar1 - 1);
  puVar3 = local_138 + uVar2 * 4;
  local_158 = local_138;
  local_150 = puVar3;
  _vDSP_ctoz(param_1 + 4,2,&local_158,1,uVar2);
  local_148 = puVar3;
  local_140 = local_138;
  _vDSP_vsmul(puVar3,1,&DAT_1007009ec,puVar3,1,uVar2);
  _vDSP_ztoc(&local_148,1,param_1 + 4,2,uVar2);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

