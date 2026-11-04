// name: FUN_1002b8303
// address: 1002b8303

uint * FUN_1002b8303(uint *param_1,uint *param_2)

{
  char cVar1;
  uint uVar2;
  undefined1 local_1c [4];
  uint *local_18;
  
  local_18 = (uint *)0x0;
  *param_2 = 0;
  uVar2 = *param_1;
  cVar1 = FUN_1002b8190(0x66726d61,param_1 + 2,
                        (uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                        uVar2 << 0x18) - 8,&local_18,local_1c);
  if (cVar1 == '\0') {
    local_18 = (uint *)0x0;
  }
  else {
    uVar2 = *local_18;
    uVar2 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
    if ((uVar2 != 0) && (uVar2 != 0x3f3f3f3f)) {
      *param_2 = uVar2;
    }
    local_18 = local_18 + -2;
  }
  return local_18;
}

