// name: FUN_10050833f
// address: 10050833f

/* WARNING: Removing unreachable block (ram,0x0001005083aa) */
/* WARNING: Removing unreachable block (ram,0x0001005083b6) */
/* WARNING: Removing unreachable block (ram,0x0001005083c0) */
/* WARNING: Removing unreachable block (ram,0x0001005083e2) */
/* WARNING: Removing unreachable block (ram,0x0001005083f4) */
/* WARNING: Removing unreachable block (ram,0x00010050843f) */
/* WARNING: Removing unreachable block (ram,0x0001005087fc) */
/* WARNING: Removing unreachable block (ram,0x00010050845c) */
/* WARNING: Removing unreachable block (ram,0x00010050840e) */
/* WARNING: Removing unreachable block (ram,0x000100508412) */
/* WARNING: Removing unreachable block (ram,0x000100508417) */
/* WARNING: Removing unreachable block (ram,0x000100508423) */
/* WARNING: Removing unreachable block (ram,0x00010050847f) */
/* WARNING: Removing unreachable block (ram,0x0001005084bb) */
/* WARNING: Removing unreachable block (ram,0x0001005088bf) */
/* WARNING: Removing unreachable block (ram,0x000100508921) */
/* WARNING: Removing unreachable block (ram,0x0001005088d8) */
/* WARNING: Removing unreachable block (ram,0x0001005084d5) */
/* WARNING: Removing unreachable block (ram,0x0001005084e3) */
/* WARNING: Removing unreachable block (ram,0x00010050857c) */
/* WARNING: Removing unreachable block (ram,0x000100508974) */
/* WARNING: Removing unreachable block (ram,0x0001005085bb) */
/* WARNING: Removing unreachable block (ram,0x0001005085cd) */
/* WARNING: Removing unreachable block (ram,0x0001005085d1) */
/* WARNING: Removing unreachable block (ram,0x0001005085de) */
/* WARNING: Removing unreachable block (ram,0x0001005085e2) */
/* WARNING: Removing unreachable block (ram,0x00010050860c) */
/* WARNING: Removing unreachable block (ram,0x0001005085f5) */
/* WARNING: Removing unreachable block (ram,0x00010050897b) */
/* WARNING: Removing unreachable block (ram,0x0001005085fe) */
/* WARNING: Removing unreachable block (ram,0x00010050860e) */
/* WARNING: Removing unreachable block (ram,0x00010050879a) */
/* WARNING: Removing unreachable block (ram,0x0001005086b2) */
/* WARNING: Removing unreachable block (ram,0x0001005086d4) */
/* WARNING: Removing unreachable block (ram,0x000100508787) */
/* WARNING: Removing unreachable block (ram,0x0001005087a6) */
/* WARNING: Removing unreachable block (ram,0x0001005087dd) */
/* WARNING: Removing unreachable block (ram,0x0001005084fb) */
/* WARNING: Removing unreachable block (ram,0x0001005087e5) */
/* WARNING: Removing unreachable block (ram,0x000100508439) */
/* WARNING: Removing unreachable block (ram,0x000100508465) */
/* WARNING: Removing unreachable block (ram,0x00010050846c) */
/* WARNING: Removing unreachable block (ram,0x00010050847a) */

undefined8 FUN_10050833f(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 local_4d48;
  char *local_4d44;
  undefined2 local_4d3c;
  int local_4d3a;
  undefined4 uStack_4d36;
  undefined8 uStack_40;
  long local_38;
  
  uStack_40 = 0x100508357;
  lVar3 = FUN_100108310();
  lVar3 = -lVar3;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  *(undefined8 *)((long)&local_38 + lVar3) = 0x100508385;
  iVar2 = FUN_100596940(param_2);
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      *(undefined8 *)((long)&local_38 + lVar3) = 0x1005088f8;
      FUN_100595344(0);
    }
    else {
      *(undefined8 *)((long)&local_38 + lVar3) = 0x10050885d;
      uVar4 = FUN_1001cc310();
      *(undefined8 *)((long)&local_38 + lVar3) = 0x10050886d;
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_4d48 = 0x8220202;
        local_4d44 = "Assertion failure";
        local_4d3c = 0x400;
        _local_4d3a = CONCAT44(uStack_4d36,iVar2);
        *(undefined8 *)((long)&local_38 + lVar3) = 0x1005088bd;
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_4d48,0x12);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)((long)&local_38 + lVar3) = 0x100508974;
  ___stack_chk_fail();
}

