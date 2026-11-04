// name: FUN_10036db97
// address: 10036db97

uint FUN_10036db97(uint param_1)

{
  char cVar1;
  undefined4 local_28;
  uint local_24;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((int)param_1 < -0x25) {
    switch(param_1) {
    case 0xe8004001:
      goto switchD_10036dbcb_caseD_1;
    case 0xe8004002:
    case 0xe8004006:
    case 0xe800400b:
    case 0xe800400c:
    case 0xe800400d:
    case 0xe8004015:
    case 0xe8004017:
      goto switchD_10036dbcb_caseD_ffffffdb;
    case 0xe8004003:
      goto switchD_10036dbcb_caseD_3;
    case 0xe8004004:
      goto switchD_10036dbcb_caseD_4;
    case 0xe8004005:
      goto switchD_10036dbcb_caseD_5;
    case 0xe8004007:
      goto switchD_10036dbcb_caseD_7;
    case 0xe8004008:
      goto switchD_10036dbcb_caseD_8;
    case 0xe8004009:
      goto switchD_10036dbcb_caseD_9;
    case 0xe800400a:
      goto switchD_10036dbcb_caseD_a;
    case 0xe800400e:
      goto switchD_10036dbcb_caseD_e;
    case 0xe800400f:
      goto switchD_10036dbcb_caseD_f;
    case 0xe8004010:
      goto switchD_10036dbcb_caseD_10;
    case 0xe8004011:
      goto switchD_10036dbcb_caseD_11;
    case 0xe8004012:
      goto switchD_10036dbcb_caseD_12;
    case 0xe8004013:
      goto switchD_10036dbcb_caseD_13;
    case 0xe8004014:
      goto switchD_10036dbcb_caseD_14;
    case 0xe8004016:
      goto switchD_10036dbcb_caseD_16;
    default:
      if ((param_1 == 0xfffff7c2) || (param_1 == 0xffffffce)) goto switchD_10036dbcb_caseD_ffffffdb;
    }
switchD_10036dbcb_caseD_ffffffdc:
    cVar1 = _os_log_type_enabled(PTR___os_log_default_10082cb88,2);
    if (cVar1 != '\0') {
      local_28 = 0x4000100;
      local_24 = param_1;
      __os_log_debug_impl(0x100000000,PTR___os_log_default_10082cb88,2,
                          "AFCErrorToOSStatus(): unknown AFCDomainError %d",&local_28,8);
    }
  }
  else {
    switch(param_1) {
    case 1:
switchD_10036dbcb_caseD_1:
      param_1 = 0xfffffa6e;
      break;
    case 2:
    case 6:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0x15:
    case 0x17:
      param_1 = param_1 | 0xe8004000;
      break;
    case 3:
switchD_10036dbcb_caseD_3:
      param_1 = 0xffffffd6;
      break;
    case 4:
switchD_10036dbcb_caseD_4:
      param_1 = 0xffffffed;
      break;
    case 5:
switchD_10036dbcb_caseD_5:
      param_1 = 0xffffffec;
      break;
    case 7:
switchD_10036dbcb_caseD_7:
      param_1 = 0xffffffce;
      break;
    case 8:
switchD_10036dbcb_caseD_8:
      param_1 = 0xffffffd5;
      break;
    case 9:
switchD_10036dbcb_caseD_9:
      param_1 = 0xfffffaea;
      break;
    case 10:
switchD_10036dbcb_caseD_a:
      param_1 = 0xffffffca;
      break;
    case 0xe:
switchD_10036dbcb_caseD_e:
      param_1 = 0xffffffd9;
      break;
    case 0xf:
switchD_10036dbcb_caseD_f:
      param_1 = 0xfffffffc;
      break;
    case 0x10:
switchD_10036dbcb_caseD_10:
      param_1 = 0xffffffd0;
      break;
    case 0x11:
switchD_10036dbcb_caseD_11:
      param_1 = 0xffffffd1;
      break;
    case 0x12:
switchD_10036dbcb_caseD_12:
      param_1 = 0xffffffde;
      break;
    case 0x13:
switchD_10036dbcb_caseD_13:
      param_1 = 0xfffff35e;
      break;
    case 0x14:
switchD_10036dbcb_caseD_14:
      param_1 = 0xffffffdc;
      break;
    case 0x16:
switchD_10036dbcb_caseD_16:
      param_1 = 0xfffff334;
      break;
    case 0xffffffdb:
    case 0xffffffdd:
    case 0xfffffffc:
    case 0:
      break;
    default:
      goto switchD_10036dbcb_caseD_ffffffdc;
    }
  }
switchD_10036dbcb_caseD_ffffffdb:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

