// name: FUN_1001f4309
// address: 1001f4309

cfstringStruct * FUN_1001f4309(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  cfstringStruct *pcVar3;
  char *pcVar4;
  char *pcVar5;
  short local_130 [3];
  short local_12a;
  char local_128;
  char local_127;
  char local_126 [262];
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_100169da8(param_1,&cf_lt);
  if (cVar1 != '\0') {
    pcVar3 = &cf_<;
    goto LAB_1001f4451;
  }
  cVar1 = FUN_100169da8(param_1,&cf_gt);
  if (cVar1 != '\0') {
    pcVar3 = &cf_>;
    goto LAB_1001f4451;
  }
  cVar1 = FUN_100169da8(param_1,&cf_amp);
  if (cVar1 != '\0') {
    pcVar3 = &cf__;
    goto LAB_1001f4451;
  }
  cVar1 = FUN_100169da8(param_1,&cf_quot);
  if (cVar1 != '\0') {
    pcVar3 = &cf__;
    goto LAB_1001f4451;
  }
  cVar1 = FUN_100169da8(param_1,&cf_apos);
  if (cVar1 != '\0') {
    pcVar3 = &cf__;
    goto LAB_1001f4451;
  }
  cVar1 = FUN_100169da8(param_1,&cf_lsquo);
  if (cVar1 == '\0') {
    cVar1 = FUN_100169da8(param_1,&cf_rsquo);
    if (cVar1 == '\0') {
      cVar1 = FUN_100169da8(param_1,&cf_ldquo);
      if (cVar1 == '\0') {
        cVar1 = FUN_100169da8(param_1,&cf_rdquo);
        if (cVar1 == '\0') {
          FUN_1001e5e36(param_1,&local_128,0x100);
          if (local_128 == '#') {
            if (local_127 == 'x') {
              pcVar5 = local_126;
              pcVar4 = "%x";
            }
            else {
              pcVar5 = &local_127;
              pcVar4 = "%d";
            }
            iVar2 = _sscanf(pcVar5,pcVar4,local_130);
            if ((iVar2 == 1) && (local_12a = local_130[0], local_130[0] != 0)) goto LAB_1001f4436;
          }
          pcVar3 = (cfstringStruct *)0x0;
          goto LAB_1001f4451;
        }
        local_12a = 0x201d;
      }
      else {
        local_12a = 0x201c;
      }
    }
    else {
      local_12a = 0x2019;
    }
  }
  else {
    local_12a = 0x2018;
  }
LAB_1001f4436:
  pcVar3 = (cfstringStruct *)FUN_1001734b1(DAT_1008c4d90,&local_12a,1);
LAB_1001f4451:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return pcVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

