// name: FUN_100600ad2
// address: 100600ad2

/* WARNING: Removing unreachable block (ram,0x000100600be1) */
/* WARNING: Removing unreachable block (ram,0x000100600bf7) */
/* WARNING: Removing unreachable block (ram,0x000100600c07) */
/* WARNING: Removing unreachable block (ram,0x000100600cd2) */
/* WARNING: Removing unreachable block (ram,0x000100600d44) */
/* WARNING: Removing unreachable block (ram,0x000100600ceb) */
/* WARNING: Removing unreachable block (ram,0x000100600c3a) */
/* WARNING: Removing unreachable block (ram,0x000100600c40) */
/* WARNING: Removing unreachable block (ram,0x000100600c63) */

void FUN_100600ad2(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_1001ab24a(param_2);
  if (cVar1 != '\0') {
    FUN_1001ab042(&local_48,param_2);
    FUN_1001b7f2a(local_58,&local_48);
    FUN_1001ab006(&local_48);
    FUN_1001b7b04(&local_48,"media-domain:");
    cVar1 = FUN_1001ba114(local_58,&local_48,0x1b1);
    FUN_1001b7a50(&local_48);
    if (cVar1 != '\0') {
      FUN_1001b7b04(local_78,"media-domain:");
      FUN_1001b7b04(local_68,"");
      FUN_1001ba564(&local_48,local_58,local_78,local_68);
      FUN_1001bb856(&local_48);
      FUN_1001b7a50(&local_48);
      FUN_1001b7a50(local_68);
      FUN_1001b7a50(local_78);
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x822;
        local_3a = "IsDiscreteMediaDomain(mediaDomain)";
        __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      FUN_1001782e9(0,0);
    }
    FUN_1001b7a50(local_58);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

