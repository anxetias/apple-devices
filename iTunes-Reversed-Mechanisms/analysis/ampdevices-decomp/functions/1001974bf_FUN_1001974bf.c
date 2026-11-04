// name: FUN_1001974bf
// address: 1001974bf

undefined8
FUN_1001974bf(Bytef *param_1,uInt param_2,long *param_3,undefined8 *param_4,alloc_func param_5,
             code *param_6,free_func param_7)

{
  char cVar1;
  int iVar2;
  int iVar3;
  Bytef *pBVar4;
  undefined8 uVar5;
  long lVar6;
  z_stream local_b8;
  long *local_48;
  code *local_40;
  undefined8 *local_38;
  
  local_48 = param_3;
  local_40 = param_6;
  pBVar4 = (*param_5)((voidpf)0x0,1,1000000);
  if (pBVar4 == (Bytef *)0x0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      FUN_1006965d4(uVar5);
    }
LAB_1001975a6:
    FUN_1001782e9(0,0);
    uVar5 = 0xffffff94;
  }
  else {
    local_38 = param_4;
    FUN_1001c62d9(&local_b8,0x70);
    local_b8.avail_out = 1000000;
    local_b8.zfree = param_7;
    local_b8.opaque = (voidpf)0x0;
    local_b8.next_in = param_1;
    local_b8.avail_in = param_2;
    local_b8.next_out = pBVar4;
    local_b8.zalloc = param_5;
    iVar2 = _inflateInit2_(&local_b8,-0xf,"1.2.12",0x70);
    if (iVar2 == 0) {
      iVar2 = 1000000;
      while (iVar3 = _inflate(&local_b8,2), iVar3 == 0) {
        if (local_b8.avail_out == 0) {
          iVar2 = iVar2 + 10000000;
          pBVar4 = (Bytef *)(*local_40)(0,pBVar4,1,iVar2);
          if (pBVar4 == (Bytef *)0x0) {
            uVar5 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar5,0x10);
            if (cVar1 != '\0') {
              FUN_10069655e(uVar5);
            }
            goto LAB_1001975a6;
          }
        }
        local_b8.next_in = param_1 + local_b8.total_in;
        local_b8.avail_in = param_2 - (int)local_b8.total_in;
        local_b8.next_out = pBVar4 + CONCAT44(local_b8.total_out._4_4_,(int)local_b8.total_out);
        local_b8.avail_out = iVar2 - (int)local_b8.total_out;
      }
      if (iVar3 == 1) {
        iVar2 = _inflateEnd(&local_b8);
        if (pBVar4 == (Bytef *)0x0) {
          lVar6 = 0;
LAB_1001976b3:
          *local_48 = lVar6;
          *local_38 = CONCAT44(local_b8.total_out._4_4_,(int)local_b8.total_out);
          if (iVar2 != 0) {
            return 0xffffffce;
          }
          return 0;
        }
        lVar6 = (*local_40)(0,pBVar4,1,(int)local_b8.total_out);
        if (lVar6 != 0) goto LAB_1001976b3;
        uVar5 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar5,0x10);
        if (cVar1 != '\0') {
          FUN_1006964e8(uVar5);
        }
        goto LAB_1001975a6;
      }
    }
    else {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        FUN_100696472(uVar5);
      }
      FUN_1001782e9(0,0);
    }
    uVar5 = 0xffffffce;
  }
  return uVar5;
}

