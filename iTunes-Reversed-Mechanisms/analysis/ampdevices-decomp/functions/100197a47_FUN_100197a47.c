// name: FUN_100197a47
// address: 100197a47

undefined8
FUN_100197a47(Bytef *param_1,long param_2,undefined8 *param_3,ulong param_4,ulong *param_5)

{
  ulong *puVar1;
  int iVar2;
  ulong uVar3;
  uLong uVar4;
  uInt len;
  undefined8 uVar5;
  z_stream local_b0;
  ulong *local_40;
  int local_34;
  
  if (param_2 == 0 || param_1 == (Bytef *)0x0) {
    return 0;
  }
  uVar5 = 0xffffffce;
  if (param_5 == (ulong *)0x0 || (param_4 == 0 || param_3 == (undefined8 *)0x0)) {
    return 0xffffffce;
  }
  local_40 = param_5;
  uVar3 = FUN_1001979ca(param_2);
  if (param_4 < uVar3) {
    return 0xffffffce;
  }
  *param_3 = 0x88b1f;
  *(undefined2 *)(param_3 + 1) = 0xff00;
  local_b0.next_out = (Bytef *)((long)param_3 + 10);
  len = (uInt)param_2;
  local_b0.avail_out = (uInt)(param_4 - 10);
  if (param_4 - 10 >> 0x20 == 0) {
    local_b0.zalloc = (alloc_func)0x0;
    local_b0.zfree = (free_func)0x0;
    local_b0.opaque = (voidpf)0x0;
    local_b0.next_in = param_1;
    local_b0.avail_in = len;
    iVar2 = _deflateInit2_(&local_b0,-1,8,-0xf,8,0,"1.2.12",0x70);
    if (iVar2 == 0) {
      iVar2 = _deflate(&local_b0,4);
      if (iVar2 == 1) {
        iVar2 = _deflateEnd(&local_b0);
        param_4 = local_b0.total_out + 10;
      }
      else {
        local_34 = iVar2;
        _deflateEnd(&local_b0);
        iVar2 = local_34;
        if (local_34 == 0) goto LAB_100197ba6;
      }
    }
    puVar1 = local_40;
    *local_40 = param_4 & 0xffffffff;
    if (iVar2 == -4) {
      uVar5 = 0xffffff94;
    }
    else if (iVar2 == 0) {
      uVar5 = 0;
      uVar4 = _crc32(0,param_1,len);
      uVar3 = *puVar1;
      *(int *)((long)param_3 + (ulong)(uint)uVar3) = (int)uVar4;
      *(uInt *)((long)param_3 + (ulong)(uint)uVar3 + 4) = len;
      *puVar1 = *puVar1 + 8;
    }
  }
  else {
LAB_100197ba6:
    *local_40 = param_4 & 0xffffffff;
  }
  return uVar5;
}

