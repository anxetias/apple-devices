// rea decompile_all
// name: _ccec_import_affine_point_ws
// address: 0x263d3b
// body: available
// range: 0x263d3b-0x263ff3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _ccec_import_affine_point_ws
              (long param_1,long *param_2,int param_3,ulong param_4,byte *param_5,long param_6)

{
  uint *puVar1;
  long lVar2;
  undefined8 uVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  
  iVar5 = -7;
  if (param_4 != 0) {
    lVar2 = *param_2;
    if ((param_4 == 1) && (*param_5 == 0)) {
      iVar5 = -0xa0;
    }
    else {
      if (param_3 == 4) {
        lVar8 = _cczp_bitlen(param_2);
        iVar13 = -0xac;
        if (lVar8 + 7U >> 3 != param_4) {
          return -0xac;
        }
      }
      else if (param_3 == 1) {
        lVar8 = _cczp_bitlen(param_2);
        iVar13 = -0xaa;
        if ((lVar8 + 7U >> 2 | 1) != param_4) {
          return -0xaa;
        }
        if (*param_5 != 4) {
          return -0xaa;
        }
      }
      else {
        if (param_3 == 2) {
          lVar8 = _cczp_bitlen(param_2);
          if ((lVar8 + 7U >> 2 | 1) != param_4) {
            return -0xab;
          }
          bVar4 = *param_5 - 8;
          iVar13 = -0xab;
        }
        else {
          if (param_3 != 3) {
            return -7;
          }
          uVar9 = _ccec_compressed_x962_export_pub_size(param_2);
          if (uVar9 != param_4) {
            return -0xa1;
          }
          bVar4 = *param_5 - 4;
          iVar13 = -0xa1;
        }
        if (bVar4 < 0xfe) {
          return iVar13;
        }
      }
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      uVar10 = (**(code **)(param_1 + 0x18))(param_1,lVar2);
      lVar8 = _cczp_bitlen(param_2);
      iVar5 = _ccn_read_uint_public_value(lVar2,param_6,lVar8 + 7U >> 3,param_5 + (param_3 != 4));
      if ((iVar5 == 0) &&
         (iVar6 = _ccn_cmp_internal(lVar2,param_6,param_2 + 3), iVar5 = iVar13, iVar6 == -1)) {
        if (param_3 - 3U < 2) {
          iVar5 = _ccec_affine_point_from_x_ws(param_1,param_2,param_6,param_6);
          if (iVar5 == 0) {
            _cczp_negate(param_2,uVar10,param_6 + *param_2 * 8);
            puVar1 = (uint *)(param_6 + *param_2 * 8);
            if (param_3 == 4) {
              uVar7 = _ccn_cmp_internal(lVar2,uVar10,puVar1);
              uVar7 = uVar7 >> 0x1f;
            }
            else {
              uVar7 = (uint)((*puVar1 & 1) != (*param_5 & 1));
            }
            _ccn_mux(lVar2,uVar7,puVar1,uVar10,puVar1);
            iVar5 = 0;
          }
        }
        else {
          lVar11 = _cczp_bitlen(param_2);
          lVar8 = *param_2;
          lVar12 = _cczp_bitlen(param_2);
          iVar5 = _ccn_read_uint_public_value
                            (lVar2,param_6 + lVar8 * 8,lVar12 + 7U >> 3,
                             param_5 + (lVar11 + 7U >> 3) + 1);
          if (iVar5 == 0) {
            iVar5 = 0;
            if ((param_3 == 2) &&
               (iVar5 = 0, (*(uint *)(param_6 + *param_2 * 8) & 1) != (*param_5 & 1))) {
              iVar5 = -0xab;
            }
          }
        }
      }
      *(undefined8 *)(param_1 + 0x10) = uVar3;
    }
  }
  return iVar5;
}

