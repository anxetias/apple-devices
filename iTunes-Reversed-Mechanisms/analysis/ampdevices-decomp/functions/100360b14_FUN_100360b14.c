// name: FUN_100360b14
// address: 100360b14

void * FUN_100360b14(Bytef *param_1,long param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  void *pvVar4;
  undefined8 uVar5;
  ulong uVar6;
  z_stream local_b8;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_b8.avail_in = (uInt)param_2;
  local_b8.total_out = 0;
  local_b8.zalloc = (alloc_func)0x0;
  local_b8.zfree = (free_func)0x0;
  local_b8.next_in = param_1;
  iVar2 = _inflateInit_(&local_b8,"1.2.12",0x70);
  if (iVar2 == 0) {
    uVar6 = (ulong)param_3 * param_2;
    pvVar3 = _malloc(uVar6);
    if (pvVar3 == (void *)0x0) {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x822;
        local_3a = "result != __null";
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      pvVar4 = (void *)0x0;
      FUN_1001782e9(0,0);
      goto LAB_100360c61;
    }
    do {
      pvVar4 = pvVar3;
      if (uVar6 <= local_b8.total_out) {
        uVar6 = uVar6 + (uVar6 >> 1);
        pvVar4 = _realloc(pvVar3,uVar6);
        if (pvVar4 == (void *)0x0) {
          uVar5 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar5,0x10);
          if (cVar1 != '\0') {
            local_48 = 0x8220202;
            local_44 = "Assertion failure";
            local_3c = 0x822;
            local_3a = "result != __null";
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
          }
          FUN_1001782e9(0,0);
          pvVar4 = pvVar3;
          break;
        }
      }
      local_b8.next_out = (Bytef *)((long)pvVar4 + local_b8.total_out);
      local_b8.avail_out = (int)uVar6 - (int)local_b8.total_out;
      iVar2 = _inflate(&local_b8,2);
      if ((iVar2 == 1) || ((iVar2 == -5 && (local_b8.avail_in == 0)))) {
        iVar2 = _inflateEnd(&local_b8);
        if (iVar2 == 0) goto LAB_100360c61;
        break;
      }
      pvVar3 = pvVar4;
    } while (iVar2 == 0);
    _free(pvVar4);
  }
  pvVar4 = (void *)0x0;
LAB_100360c61:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return pvVar4;
}

