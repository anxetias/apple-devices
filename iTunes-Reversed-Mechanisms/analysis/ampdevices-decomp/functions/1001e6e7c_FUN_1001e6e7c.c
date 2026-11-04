// name: FUN_1001e6e7c
// address: 1001e6e7c

void FUN_1001e6e7c(ulong param_1,ushort param_2)

{
  int iVar1;
  ushort local_2c;
  ushort local_2a;
  
  (&DAT_1008a2780)[param_1 & 0xffffffff] = 1;
  local_2a = (ushort)param_1;
  if (param_2 < local_2a) {
    return;
  }
LAB_1001e6eac:
  do {
    local_2c = (short)param_1 + 1;
    if (param_2 < local_2c) {
      param_1 = (ulong)local_2a;
    }
    else {
      iVar1 = FUN_1001e7036(&local_2a,1,&local_2c,1,0);
      param_1 = (ulong)local_2c;
      if (-1 < iVar1) goto LAB_1001e6eac;
      (&DAT_1008a2780)[param_1] = 1;
      local_2a = local_2c;
    }
    if (param_2 < local_2c) {
      return;
    }
    if (param_2 < (ushort)param_1) {
      return;
    }
  } while( true );
}

