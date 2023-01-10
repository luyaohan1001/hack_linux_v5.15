/* Generated automatically by the program `genextract'
   from the machine description file `md'.  */

#define IN_TARGET_CODE 1
#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "insn-config.h"
#include "recog.h"
#include "diagnostic-core.h"

/* This variable is used as the "location" of any missing operand
   whose numbers are skipped by a given pattern.  */
static rtx junk ATTRIBUTE_UNUSED;

void
insn_extract (rtx_insn *insn)
{
  rtx *ro = recog_data.operand;
  rtx **ro_loc = recog_data.operand_loc;
  rtx pat = PATTERN (insn);
  int i ATTRIBUTE_UNUSED; /* only for peepholes */

  if (flag_checking)
    {
      memset (ro, 0xab, sizeof (*ro) * MAX_RECOG_OPERANDS);
      memset (ro_loc, 0xab, sizeof (*ro_loc) * MAX_RECOG_OPERANDS);
    }

  switch (INSN_CODE (insn))
    {
    default:
      /* Control reaches here if insn_extract has been called with an
         unrecognizable insn (code -1), or an insn whose INSN_CODE
         corresponds to a DEFINE_EXPAND in the machine description;
         either way, a bug.  */
      if (INSN_CODE (insn) < 0)
        fatal_insn ("unrecognizable insn:", insn);
      else
        fatal_insn ("insn with invalid code number:", insn);

    case 5967:  /* atomic_bit_test_and_complementdi_1 */
    case 5966:  /* atomic_bit_test_and_complementsi_1 */
    case 5965:  /* atomic_bit_test_and_complementhi_1 */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 2));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[1] = 0;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 2);
      recog_data.dup_num[2] = 1;
      break;

    case 5970:  /* atomic_bit_test_and_resetdi_1 */
    case 5969:  /* atomic_bit_test_and_resetsi_1 */
    case 5968:  /* atomic_bit_test_and_resethi_1 */
    case 5964:  /* atomic_bit_test_and_setdi_1 */
    case 5963:  /* atomic_bit_test_and_setsi_1 */
    case 5962:  /* atomic_bit_test_and_sethi_1 */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 2));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 5961:  /* atomic_xordi */
    case 5960:  /* atomic_ordi */
    case 5959:  /* atomic_anddi */
    case 5958:  /* atomic_xorsi */
    case 5957:  /* atomic_orsi */
    case 5956:  /* atomic_andsi */
    case 5955:  /* atomic_xorhi */
    case 5954:  /* atomic_orhi */
    case 5953:  /* atomic_andhi */
    case 5952:  /* atomic_xorqi */
    case 5951:  /* atomic_orqi */
    case 5950:  /* atomic_andqi */
    case 5949:  /* atomic_subdi */
    case 5948:  /* atomic_subsi */
    case 5947:  /* atomic_subhi */
    case 5946:  /* atomic_subqi */
    case 5945:  /* atomic_adddi */
    case 5944:  /* atomic_addsi */
    case 5943:  /* atomic_addhi */
    case 5942:  /* atomic_addqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 5941:  /* atomic_exchangedi */
    case 5940:  /* atomic_exchangesi */
    case 5939:  /* atomic_exchangehi */
    case 5938:  /* atomic_exchangeqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 5937:  /* *atomic_fetch_add_cmpdi */
    case 5936:  /* *atomic_fetch_add_cmpsi */
    case 5935:  /* *atomic_fetch_add_cmphi */
    case 5934:  /* *atomic_fetch_add_cmpqi */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 0;
      break;

    case 5933:  /* atomic_fetch_adddi */
    case 5932:  /* atomic_fetch_addsi */
    case 5931:  /* atomic_fetch_addhi */
    case 5930:  /* atomic_fetch_addqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 1;
      break;

    case 5929:  /* atomic_compare_and_swapdi_1 */
    case 5928:  /* atomic_compare_and_swapsi_1 */
    case 5927:  /* atomic_compare_and_swaphi_1 */
    case 5926:  /* atomic_compare_and_swapqi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 5925:  /* atomic_compare_and_swapti_doubleword */
    case 5924:  /* atomic_compare_and_swapdi_doubleword */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 4));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 5913:  /* mfence_nosse */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0);
      recog_data.dup_num[0] = 0;
      break;

    case 5703:  /* *restore_multiple_leave_returndi */
    case 5702:  /* *restore_multiple_leave_returnsi */
    case 5701:  /* *restore_multiple_and_returndi */
    case 5700:  /* *restore_multiple_and_returnsi */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 5699:  /* *restore_multipledi */
    case 5698:  /* *restore_multiplesi */
    case 5697:  /* *save_multipledi */
    case 5696:  /* *save_multiplesi */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      break;

    case 5564:  /* avx512dq_vmfpclassv2df_mask */
    case 5562:  /* avx512dq_vmfpclassv4sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 5596:  /* avx512f_vgetmantv2df_mask_round */
    case 5592:  /* avx512f_vgetmantv4sf_mask_round */
    case 5548:  /* avx512dq_rangesv2df_mask_round */
    case 5544:  /* avx512dq_rangesv4sf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 5595:  /* avx512f_vgetmantv2df_round */
    case 5591:  /* avx512f_vgetmantv4sf_round */
    case 5547:  /* avx512dq_rangesv2df_round */
    case 5543:  /* avx512dq_rangesv4sf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 5506:  /* compressstorev8hi_mask */
    case 5505:  /* compressstorev16hi_mask */
    case 5504:  /* compressstorev32hi_mask */
    case 5503:  /* compressstorev32qi_mask */
    case 5502:  /* compressstorev16qi_mask */
    case 5501:  /* compressstorev64qi_mask */
    case 5500:  /* avx512vl_compressstorev2df_mask */
    case 5499:  /* avx512vl_compressstorev2di_mask */
    case 5498:  /* avx512vl_compressstorev4sf_mask */
    case 5497:  /* avx512vl_compressstorev4si_mask */
    case 5496:  /* avx512vl_compressstorev4df_mask */
    case 5495:  /* avx512vl_compressstorev4di_mask */
    case 5494:  /* avx512vl_compressstorev8sf_mask */
    case 5493:  /* avx512vl_compressstorev8si_mask */
    case 5492:  /* avx512f_compressstorev8df_mask */
    case 5491:  /* avx512f_compressstorev8di_mask */
    case 5490:  /* avx512f_compressstorev16sf_mask */
    case 5489:  /* avx512f_compressstorev16si_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 2));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 1);
      recog_data.dup_num[0] = 0;
      break;

    case 5470:  /* *avx512f_scatterdiv2df */
    case 5469:  /* *avx512f_scatterdiv2df */
    case 5468:  /* *avx512f_scatterdiv2di */
    case 5467:  /* *avx512f_scatterdiv2di */
    case 5466:  /* *avx512f_scatterdiv4sf */
    case 5465:  /* *avx512f_scatterdiv4sf */
    case 5464:  /* *avx512f_scatterdiv4si */
    case 5463:  /* *avx512f_scatterdiv4si */
    case 5462:  /* *avx512f_scatterdiv4df */
    case 5461:  /* *avx512f_scatterdiv4df */
    case 5460:  /* *avx512f_scatterdiv4di */
    case 5459:  /* *avx512f_scatterdiv4di */
    case 5458:  /* *avx512f_scatterdiv8sf */
    case 5457:  /* *avx512f_scatterdiv8sf */
    case 5456:  /* *avx512f_scatterdiv8si */
    case 5455:  /* *avx512f_scatterdiv8si */
    case 5454:  /* *avx512f_scatterdiv8df */
    case 5453:  /* *avx512f_scatterdiv8df */
    case 5452:  /* *avx512f_scatterdiv8di */
    case 5451:  /* *avx512f_scatterdiv8di */
    case 5450:  /* *avx512f_scatterdiv16sf */
    case 5449:  /* *avx512f_scatterdiv16sf */
    case 5448:  /* *avx512f_scatterdiv16si */
    case 5447:  /* *avx512f_scatterdiv16si */
    case 5446:  /* *avx512f_scattersiv2df */
    case 5445:  /* *avx512f_scattersiv2df */
    case 5444:  /* *avx512f_scattersiv2di */
    case 5443:  /* *avx512f_scattersiv2di */
    case 5442:  /* *avx512f_scattersiv4sf */
    case 5441:  /* *avx512f_scattersiv4sf */
    case 5440:  /* *avx512f_scattersiv4si */
    case 5439:  /* *avx512f_scattersiv4si */
    case 5438:  /* *avx512f_scattersiv4df */
    case 5437:  /* *avx512f_scattersiv4df */
    case 5436:  /* *avx512f_scattersiv4di */
    case 5435:  /* *avx512f_scattersiv4di */
    case 5434:  /* *avx512f_scattersiv8sf */
    case 5433:  /* *avx512f_scattersiv8sf */
    case 5432:  /* *avx512f_scattersiv8si */
    case 5431:  /* *avx512f_scattersiv8si */
    case 5430:  /* *avx512f_scattersiv8df */
    case 5429:  /* *avx512f_scattersiv8df */
    case 5428:  /* *avx512f_scattersiv8di */
    case 5427:  /* *avx512f_scattersiv8di */
    case 5426:  /* *avx512f_scattersiv16sf */
    case 5425:  /* *avx512f_scattersiv16sf */
    case 5424:  /* *avx512f_scattersiv16si */
    case 5423:  /* *avx512f_scattersiv16si */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0), 0, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0), 0, 2));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0), 0, 3));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0);
      recog_data.dup_num[0] = 6;
      break;

    case 5422:  /* *avx512f_gatherdiv2df_2 */
    case 5421:  /* *avx512f_gatherdiv2df_2 */
    case 5420:  /* *avx512f_gatherdiv2di_2 */
    case 5419:  /* *avx512f_gatherdiv2di_2 */
    case 5418:  /* *avx512f_gatherdiv4sf_2 */
    case 5417:  /* *avx512f_gatherdiv4sf_2 */
    case 5416:  /* *avx512f_gatherdiv4si_2 */
    case 5415:  /* *avx512f_gatherdiv4si_2 */
    case 5414:  /* *avx512f_gatherdiv4df_2 */
    case 5413:  /* *avx512f_gatherdiv4df_2 */
    case 5412:  /* *avx512f_gatherdiv4di_2 */
    case 5411:  /* *avx512f_gatherdiv4di_2 */
    case 5410:  /* *avx512f_gatherdiv8sf_2 */
    case 5409:  /* *avx512f_gatherdiv8sf_2 */
    case 5408:  /* *avx512f_gatherdiv8si_2 */
    case 5407:  /* *avx512f_gatherdiv8si_2 */
    case 5406:  /* *avx512f_gatherdiv8df_2 */
    case 5405:  /* *avx512f_gatherdiv8df_2 */
    case 5404:  /* *avx512f_gatherdiv8di_2 */
    case 5403:  /* *avx512f_gatherdiv8di_2 */
    case 5402:  /* *avx512f_gatherdiv16sf_2 */
    case 5401:  /* *avx512f_gatherdiv16sf_2 */
    case 5400:  /* *avx512f_gatherdiv16si_2 */
    case 5399:  /* *avx512f_gatherdiv16si_2 */
    case 5374:  /* *avx512f_gathersiv2df_2 */
    case 5373:  /* *avx512f_gathersiv2df_2 */
    case 5372:  /* *avx512f_gathersiv2di_2 */
    case 5371:  /* *avx512f_gathersiv2di_2 */
    case 5370:  /* *avx512f_gathersiv4sf_2 */
    case 5369:  /* *avx512f_gathersiv4sf_2 */
    case 5368:  /* *avx512f_gathersiv4si_2 */
    case 5367:  /* *avx512f_gathersiv4si_2 */
    case 5366:  /* *avx512f_gathersiv4df_2 */
    case 5365:  /* *avx512f_gathersiv4df_2 */
    case 5364:  /* *avx512f_gathersiv4di_2 */
    case 5363:  /* *avx512f_gathersiv4di_2 */
    case 5362:  /* *avx512f_gathersiv8sf_2 */
    case 5361:  /* *avx512f_gathersiv8sf_2 */
    case 5360:  /* *avx512f_gathersiv8si_2 */
    case 5359:  /* *avx512f_gathersiv8si_2 */
    case 5358:  /* *avx512f_gathersiv8df_2 */
    case 5357:  /* *avx512f_gathersiv8df_2 */
    case 5356:  /* *avx512f_gathersiv8di_2 */
    case 5355:  /* *avx512f_gathersiv8di_2 */
    case 5354:  /* *avx512f_gathersiv16sf_2 */
    case 5353:  /* *avx512f_gathersiv16sf_2 */
    case 5352:  /* *avx512f_gathersiv16si_2 */
    case 5351:  /* *avx512f_gathersiv16si_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2), 0), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2), 0), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      break;

    case 5398:  /* *avx512f_gatherdiv2df */
    case 5397:  /* *avx512f_gatherdiv2df */
    case 5396:  /* *avx512f_gatherdiv2di */
    case 5395:  /* *avx512f_gatherdiv2di */
    case 5394:  /* *avx512f_gatherdiv4sf */
    case 5393:  /* *avx512f_gatherdiv4sf */
    case 5392:  /* *avx512f_gatherdiv4si */
    case 5391:  /* *avx512f_gatherdiv4si */
    case 5390:  /* *avx512f_gatherdiv4df */
    case 5389:  /* *avx512f_gatherdiv4df */
    case 5388:  /* *avx512f_gatherdiv4di */
    case 5387:  /* *avx512f_gatherdiv4di */
    case 5386:  /* *avx512f_gatherdiv8sf */
    case 5385:  /* *avx512f_gatherdiv8sf */
    case 5384:  /* *avx512f_gatherdiv8si */
    case 5383:  /* *avx512f_gatherdiv8si */
    case 5382:  /* *avx512f_gatherdiv8df */
    case 5381:  /* *avx512f_gatherdiv8df */
    case 5380:  /* *avx512f_gatherdiv8di */
    case 5379:  /* *avx512f_gatherdiv8di */
    case 5378:  /* *avx512f_gatherdiv16sf */
    case 5377:  /* *avx512f_gatherdiv16sf */
    case 5376:  /* *avx512f_gatherdiv16si */
    case 5375:  /* *avx512f_gatherdiv16si */
    case 5350:  /* *avx512f_gathersiv2df */
    case 5349:  /* *avx512f_gathersiv2df */
    case 5348:  /* *avx512f_gathersiv2di */
    case 5347:  /* *avx512f_gathersiv2di */
    case 5346:  /* *avx512f_gathersiv4sf */
    case 5345:  /* *avx512f_gathersiv4sf */
    case 5344:  /* *avx512f_gathersiv4si */
    case 5343:  /* *avx512f_gathersiv4si */
    case 5342:  /* *avx512f_gathersiv4df */
    case 5341:  /* *avx512f_gathersiv4df */
    case 5340:  /* *avx512f_gathersiv4di */
    case 5339:  /* *avx512f_gathersiv4di */
    case 5338:  /* *avx512f_gathersiv8sf */
    case 5337:  /* *avx512f_gathersiv8sf */
    case 5336:  /* *avx512f_gathersiv8si */
    case 5335:  /* *avx512f_gathersiv8si */
    case 5334:  /* *avx512f_gathersiv8df */
    case 5333:  /* *avx512f_gathersiv8df */
    case 5332:  /* *avx512f_gathersiv8di */
    case 5331:  /* *avx512f_gathersiv8di */
    case 5330:  /* *avx512f_gathersiv16sf */
    case 5329:  /* *avx512f_gathersiv16sf */
    case 5328:  /* *avx512f_gathersiv16si */
    case 5327:  /* *avx512f_gathersiv16si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2), 0), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2), 0), 0, 0));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2), 0), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      break;

    case 5326:  /* *avx2_gatherdiv8sf_4 */
    case 5325:  /* *avx2_gatherdiv8sf_4 */
    case 5324:  /* *avx2_gatherdiv8si_4 */
    case 5323:  /* *avx2_gatherdiv8si_4 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1), 0), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1), 0), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      break;

    case 5322:  /* *avx2_gatherdiv8sf_3 */
    case 5321:  /* *avx2_gatherdiv8sf_3 */
    case 5320:  /* *avx2_gatherdiv8si_3 */
    case 5319:  /* *avx2_gatherdiv8si_3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1), 0), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1), 0), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1), 0), 0, 2));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      break;

    case 5318:  /* *avx2_gatherdiv8sf_2 */
    case 5317:  /* *avx2_gatherdiv8sf_2 */
    case 5316:  /* *avx2_gatherdiv8si_2 */
    case 5315:  /* *avx2_gatherdiv8si_2 */
    case 5314:  /* *avx2_gatherdiv4sf_2 */
    case 5313:  /* *avx2_gatherdiv4sf_2 */
    case 5312:  /* *avx2_gatherdiv4si_2 */
    case 5311:  /* *avx2_gatherdiv4si_2 */
    case 5310:  /* *avx2_gatherdiv4df_2 */
    case 5309:  /* *avx2_gatherdiv4df_2 */
    case 5308:  /* *avx2_gatherdiv4di_2 */
    case 5307:  /* *avx2_gatherdiv4di_2 */
    case 5306:  /* *avx2_gatherdiv2df_2 */
    case 5305:  /* *avx2_gatherdiv2df_2 */
    case 5304:  /* *avx2_gatherdiv2di_2 */
    case 5303:  /* *avx2_gatherdiv2di_2 */
    case 5286:  /* *avx2_gathersiv8sf_2 */
    case 5285:  /* *avx2_gathersiv8sf_2 */
    case 5284:  /* *avx2_gathersiv8si_2 */
    case 5283:  /* *avx2_gathersiv8si_2 */
    case 5282:  /* *avx2_gathersiv4sf_2 */
    case 5281:  /* *avx2_gathersiv4sf_2 */
    case 5280:  /* *avx2_gathersiv4si_2 */
    case 5279:  /* *avx2_gathersiv4si_2 */
    case 5278:  /* *avx2_gathersiv4df_2 */
    case 5277:  /* *avx2_gathersiv4df_2 */
    case 5276:  /* *avx2_gathersiv4di_2 */
    case 5275:  /* *avx2_gathersiv4di_2 */
    case 5274:  /* *avx2_gathersiv2df_2 */
    case 5273:  /* *avx2_gathersiv2df_2 */
    case 5272:  /* *avx2_gathersiv2di_2 */
    case 5271:  /* *avx2_gathersiv2di_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      break;

    case 5302:  /* *avx2_gatherdiv8sf */
    case 5301:  /* *avx2_gatherdiv8sf */
    case 5300:  /* *avx2_gatherdiv8si */
    case 5299:  /* *avx2_gatherdiv8si */
    case 5298:  /* *avx2_gatherdiv4sf */
    case 5297:  /* *avx2_gatherdiv4sf */
    case 5296:  /* *avx2_gatherdiv4si */
    case 5295:  /* *avx2_gatherdiv4si */
    case 5294:  /* *avx2_gatherdiv4df */
    case 5293:  /* *avx2_gatherdiv4df */
    case 5292:  /* *avx2_gatherdiv4di */
    case 5291:  /* *avx2_gatherdiv4di */
    case 5290:  /* *avx2_gatherdiv2df */
    case 5289:  /* *avx2_gatherdiv2df */
    case 5288:  /* *avx2_gatherdiv2di */
    case 5287:  /* *avx2_gatherdiv2di */
    case 5270:  /* *avx2_gathersiv8sf */
    case 5269:  /* *avx2_gathersiv8sf */
    case 5268:  /* *avx2_gathersiv8si */
    case 5267:  /* *avx2_gathersiv8si */
    case 5266:  /* *avx2_gathersiv4sf */
    case 5265:  /* *avx2_gathersiv4sf */
    case 5264:  /* *avx2_gathersiv4si */
    case 5263:  /* *avx2_gathersiv4si */
    case 5262:  /* *avx2_gathersiv4df */
    case 5261:  /* *avx2_gathersiv4df */
    case 5260:  /* *avx2_gathersiv4di */
    case 5259:  /* *avx2_gathersiv4di */
    case 5258:  /* *avx2_gathersiv2df */
    case 5257:  /* *avx2_gathersiv2df */
    case 5256:  /* *avx2_gathersiv2di */
    case 5255:  /* *avx2_gathersiv2di */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0), 0, 2));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      break;

    case 5249:  /* *vcvtps2ph_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 5239:  /* vcvtph2ps_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 5168:  /* avx2_maskstoreq256 */
    case 5167:  /* avx2_maskstored256 */
    case 5166:  /* avx2_maskstoreq */
    case 5165:  /* avx2_maskstored */
    case 5164:  /* avx_maskstorepd256 */
    case 5163:  /* avx_maskstoreps256 */
    case 5162:  /* avx_maskstorepd */
    case 5161:  /* avx_maskstoreps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 2);
      recog_data.dup_num[0] = 0;
      break;

    case 5160:  /* avx2_maskloadq256 */
    case 5159:  /* avx2_maskloadd256 */
    case 5158:  /* avx2_maskloadq */
    case 5157:  /* avx2_maskloadd */
    case 5156:  /* avx_maskloadpd256 */
    case 5155:  /* avx_maskloadps256 */
    case 5154:  /* avx_maskloadpd */
    case 5153:  /* avx_maskloadps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 5126:  /* *avx_vperm2f128v4df_nozero */
    case 5125:  /* *avx_vperm2f128v8sf_nozero */
    case 5124:  /* *avx_vperm2f128v8si_nozero */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      break;

    case 5120:  /* avx512vl_vpermt2varv16qi3_mask */
    case 5119:  /* avx512vl_vpermt2varv32qi3_mask */
    case 5118:  /* avx512bw_vpermt2varv64qi3_mask */
    case 5117:  /* avx512vl_vpermt2varv8hi3_mask */
    case 5116:  /* avx512vl_vpermt2varv16hi3_mask */
    case 5115:  /* avx512bw_vpermt2varv32hi3_mask */
    case 5114:  /* avx512vl_vpermt2varv2df3_mask */
    case 5113:  /* avx512vl_vpermt2varv2di3_mask */
    case 5112:  /* avx512vl_vpermt2varv4sf3_mask */
    case 5111:  /* avx512vl_vpermt2varv4si3_mask */
    case 5110:  /* avx512vl_vpermt2varv4df3_mask */
    case 5109:  /* avx512vl_vpermt2varv4di3_mask */
    case 5108:  /* avx512vl_vpermt2varv8sf3_mask */
    case 5107:  /* avx512vl_vpermt2varv8si3_mask */
    case 5106:  /* avx512f_vpermt2varv8df3_mask */
    case 5105:  /* avx512f_vpermt2varv8di3_mask */
    case 5104:  /* avx512f_vpermt2varv16sf3_mask */
    case 5103:  /* avx512f_vpermt2varv16si3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 2;
      break;

    case 5066:  /* *avx512vl_vpermi2varv2df3_mask */
    case 5065:  /* *avx512vl_vpermi2varv4df3_mask */
    case 5064:  /* *avx512f_vpermi2varv8df3_mask */
    case 5063:  /* *avx512vl_vpermi2varv4sf3_mask */
    case 5062:  /* *avx512vl_vpermi2varv8sf3_mask */
    case 5061:  /* *avx512f_vpermi2varv16sf3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0);
      recog_data.dup_num[0] = 2;
      break;

    case 5060:  /* *avx512vl_vpermi2varv16qi3_mask */
    case 5059:  /* *avx512vl_vpermi2varv32qi3_mask */
    case 5058:  /* *avx512bw_vpermi2varv64qi3_mask */
    case 5057:  /* *avx512vl_vpermi2varv8hi3_mask */
    case 5056:  /* *avx512vl_vpermi2varv16hi3_mask */
    case 5055:  /* *avx512bw_vpermi2varv32hi3_mask */
    case 5054:  /* *avx512vl_vpermi2varv2di3_mask */
    case 5053:  /* *avx512vl_vpermi2varv4di3_mask */
    case 5052:  /* *avx512vl_vpermi2varv4si3_mask */
    case 5051:  /* *avx512vl_vpermi2varv8si3_mask */
    case 5050:  /* *avx512f_vpermi2varv8di3_mask */
    case 5049:  /* *avx512f_vpermi2varv16si3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 2;
      break;

    case 5004:  /* avx_vbroadcastf128_v4df */
    case 5003:  /* avx_vbroadcastf128_v8sf */
    case 5002:  /* avx_vbroadcastf128_v4di */
    case 5001:  /* avx_vbroadcastf128_v8si */
    case 5000:  /* avx_vbroadcastf128_v16hi */
    case 4999:  /* avx_vbroadcastf128_v32qi */
    case 4988:  /* avx2_vbroadcasti128_v4di */
    case 4987:  /* avx2_vbroadcasti128_v8si */
    case 4986:  /* avx2_vbroadcasti128_v16hi */
    case 4985:  /* avx2_vbroadcasti128_v32qi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 4887:  /* *avx_vpermilpv2df_mask */
    case 4885:  /* *avx_vpermilpv4df_mask */
    case 4883:  /* *avx512f_vpermilpv8df_mask */
    case 4881:  /* *avx_vpermilpv4sf_mask */
    case 4879:  /* *avx_vpermilpv8sf_mask */
    case 4877:  /* *avx512f_vpermilpv16sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 5132:  /* *ssse3_palignrv2df_perm */
    case 5131:  /* *ssse3_palignrv4sf_perm */
    case 5130:  /* *ssse3_palignrv2di_perm */
    case 5129:  /* *ssse3_palignrv4si_perm */
    case 5128:  /* *ssse3_palignrv8hi_perm */
    case 5127:  /* *ssse3_palignrv16qi_perm */
    case 4886:  /* *avx_vpermilpv2df */
    case 4884:  /* *avx_vpermilpv4df */
    case 4882:  /* *avx512f_vpermilpv8df */
    case 4880:  /* *avx_vpermilpv4sf */
    case 4878:  /* *avx_vpermilpv8sf */
    case 4876:  /* *avx512f_vpermilpv16sf */
    case 4875:  /* *avx_vperm_broadcast_v4df */
    case 4874:  /* *avx_vperm_broadcast_v8sf */
    case 4873:  /* *avx_vperm_broadcast_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      break;

    case 4828:  /* *avx_vzeroupper_1 */
    case 4827:  /* *avx_vzeroupper */
    case 4826:  /* *avx_vzeroall */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      break;

    case 4810:  /* xop_maskcmp_uns2v2di3 */
    case 4809:  /* xop_maskcmp_uns2v4si3 */
    case 4808:  /* xop_maskcmp_uns2v8hi3 */
    case 4807:  /* xop_maskcmp_uns2v16qi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      break;

    case 4806:  /* xop_maskcmp_unsv2di3 */
    case 4805:  /* xop_maskcmp_unsv4si3 */
    case 4804:  /* xop_maskcmp_unsv8hi3 */
    case 4803:  /* xop_maskcmp_unsv16qi3 */
    case 4802:  /* xop_maskcmpv2di3 */
    case 4801:  /* xop_maskcmpv4si3 */
    case 4800:  /* xop_maskcmpv8hi3 */
    case 4799:  /* xop_maskcmpv16qi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 4790:  /* xop_shlv2di3 */
    case 4789:  /* xop_shlv4si3 */
    case 4788:  /* xop_shlv8hi3 */
    case 4787:  /* xop_shlv16qi3 */
    case 4786:  /* xop_shav2di3 */
    case 4785:  /* xop_shav4si3 */
    case 4784:  /* xop_shav8hi3 */
    case 4783:  /* xop_shav16qi3 */
    case 4782:  /* xop_vrotlv2di3 */
    case 4781:  /* xop_vrotlv4si3 */
    case 4780:  /* xop_vrotlv8hi3 */
    case 4779:  /* xop_vrotlv16qi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 1);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 2), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 2), 1), 0);
      recog_data.dup_num[2] = 2;
      break;

    case 4770:  /* xop_pperm_pack_v8hi_v16qi */
    case 4769:  /* xop_pperm_pack_v4si_v8hi */
    case 4768:  /* xop_pperm_pack_v2di_v4si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 4757:  /* xop_phaddubq */
    case 4756:  /* xop_phaddbq */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[3] = 1;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 0);
      recog_data.dup_num[4] = 1;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0);
      recog_data.dup_num[5] = 1;
      recog_data.dup_loc[6] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0);
      recog_data.dup_num[6] = 1;
      break;

    case 4761:  /* xop_phadduwq */
    case 4760:  /* xop_phaddwq */
    case 4755:  /* xop_phaddubd */
    case 4754:  /* xop_phaddbd */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      break;

    case 4766:  /* xop_phsubdq */
    case 4765:  /* xop_phsubwd */
    case 4764:  /* xop_phsubbw */
    case 4763:  /* xop_phaddudq */
    case 4762:  /* xop_phadddq */
    case 4759:  /* xop_phadduwd */
    case 4758:  /* xop_phaddwd */
    case 4753:  /* xop_phaddubw */
    case 4752:  /* xop_phaddbw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 4751:  /* xop_pcmov_v2df */
    case 4750:  /* xop_pcmov_v4df256 */
    case 4749:  /* xop_pcmov_v4sf */
    case 4748:  /* xop_pcmov_v8sf256 */
    case 4747:  /* xop_pcmov_v2di */
    case 4746:  /* xop_pcmov_v4di256 */
    case 4745:  /* xop_pcmov_v4si */
    case 4744:  /* xop_pcmov_v8si256 */
    case 4743:  /* xop_pcmov_v8hi */
    case 4742:  /* xop_pcmov_v16hi256 */
    case 4741:  /* xop_pcmov_v16qi */
    case 4740:  /* xop_pcmov_v32qi256 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 2));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 4739:  /* xop_pmadcsswd */
    case 4738:  /* xop_pmadcswd */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 4737:  /* xop_pmacsswd */
    case 4736:  /* xop_pmacswd */
    case 4735:  /* xop_pmacssdqh */
    case 4734:  /* xop_pmacsdqh */
    case 4733:  /* xop_pmacssdql */
    case 4732:  /* xop_pmacsdql */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 4727:  /* avx512er_vmrsqrt28v2df_round */
    case 4725:  /* avx512er_vmrsqrt28v4sf_round */
    case 4715:  /* avx512er_vmrcp28v2df_round */
    case 4713:  /* avx512er_vmrcp28v4sf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 4695:  /* *avx512pf_scatterpfv8didf_mask */
    case 4694:  /* *avx512pf_scatterpfv8didf_mask */
    case 4693:  /* *avx512pf_scatterpfv8sidf_mask */
    case 4692:  /* *avx512pf_scatterpfv8sidf_mask */
    case 4691:  /* *avx512pf_scatterpfv8disf_mask */
    case 4690:  /* *avx512pf_scatterpfv8disf_mask */
    case 4689:  /* *avx512pf_scatterpfv16sisf_mask */
    case 4688:  /* *avx512pf_scatterpfv16sisf_mask */
    case 4687:  /* *avx512pf_gatherpfv8didf_mask */
    case 4686:  /* *avx512pf_gatherpfv8didf_mask */
    case 4685:  /* *avx512pf_gatherpfv8sidf_mask */
    case 4684:  /* *avx512pf_gatherpfv8sidf_mask */
    case 4683:  /* *avx512pf_gatherpfv8disf_mask */
    case 4682:  /* *avx512pf_gatherpfv8disf_mask */
    case 4681:  /* *avx512pf_gatherpfv16sisf_mask */
    case 4680:  /* *avx512pf_gatherpfv16sisf_mask */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (pat, 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (pat, 0, 1));
      break;

    case 4679:  /* sse4_2_pcmpistr_cconly */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      break;

    case 4678:  /* sse4_2_pcmpistrm */
    case 4677:  /* sse4_2_pcmpistri */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[2] = 1;
      break;

    case 4676:  /* sse4_2_pcmpistr */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 2);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 1);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 0);
      recog_data.dup_num[2] = 2;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[3] = 4;
      recog_data.dup_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[4] = 3;
      recog_data.dup_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[5] = 2;
      break;

    case 4675:  /* sse4_2_pcmpestr_cconly */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 4));
      break;

    case 4674:  /* sse4_2_pcmpestrm */
    case 4673:  /* sse4_2_pcmpestri */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 4));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 4);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 3);
      recog_data.dup_num[1] = 4;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[2] = 3;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[4] = 1;
      break;

    case 4672:  /* sse4_2_pcmpestr */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 4));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 4);
      recog_data.dup_num[0] = 6;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 3);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 2);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 1);
      recog_data.dup_num[3] = 3;
      recog_data.dup_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 0);
      recog_data.dup_num[4] = 2;
      recog_data.dup_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 4);
      recog_data.dup_num[5] = 6;
      recog_data.dup_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 3);
      recog_data.dup_num[6] = 5;
      recog_data.dup_loc[7] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[7] = 4;
      recog_data.dup_loc[8] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[8] = 3;
      recog_data.dup_loc[9] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[9] = 2;
      break;

    case 4626:  /* *sse4_1_zero_extendv2hiv2di2_mask_2 */
    case 4624:  /* *sse4_1_sign_extendv2hiv2di2_mask_2 */
    case 4594:  /* *avx2_zero_extendv4qiv4di2_mask_2 */
    case 4592:  /* *avx2_sign_extendv4qiv4di2_mask_2 */
    case 4550:  /* *sse4_1_zero_extendv4qiv4si2_mask_2 */
    case 4548:  /* *sse4_1_sign_extendv4qiv4si2_mask_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4625:  /* *sse4_1_zero_extendv2hiv2di2_2 */
    case 4623:  /* *sse4_1_sign_extendv2hiv2di2_2 */
    case 4593:  /* *avx2_zero_extendv4qiv4di2_2 */
    case 4591:  /* *avx2_sign_extendv4qiv4di2_2 */
    case 4549:  /* *sse4_1_zero_extendv4qiv4si2_2 */
    case 4547:  /* *sse4_1_sign_extendv4qiv4si2_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      break;

    case 4646:  /* *sse4_1_zero_extendv2siv2di2_mask_2 */
    case 4644:  /* *sse4_1_sign_extendv2siv2di2_mask_2 */
    case 4614:  /* *avx2_zero_extendv4hiv4di2_mask_2 */
    case 4612:  /* *avx2_sign_extendv4hiv4di2_mask_2 */
    case 4582:  /* *avx512f_zero_extendv8qiv8di2_mask_2 */
    case 4580:  /* *avx512f_sign_extendv8qiv8di2_mask_2 */
    case 4570:  /* *sse4_1_zero_extendv4hiv4si2_mask_2 */
    case 4568:  /* *sse4_1_sign_extendv4hiv4si2_mask_2 */
    case 4538:  /* *avx2_zero_extendv8qiv8si2_mask_2 */
    case 4536:  /* *avx2_sign_extendv8qiv8si2_mask_2 */
    case 4522:  /* *sse4_1_zero_extendv8qiv8hi2_mask_2 */
    case 4520:  /* *sse4_1_sign_extendv8qiv8hi2_mask_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4645:  /* *sse4_1_zero_extendv2siv2di2_2 */
    case 4643:  /* *sse4_1_sign_extendv2siv2di2_2 */
    case 4613:  /* *avx2_zero_extendv4hiv4di2_2 */
    case 4611:  /* *avx2_sign_extendv4hiv4di2_2 */
    case 4581:  /* *avx512f_zero_extendv8qiv8di2_2 */
    case 4579:  /* *avx512f_sign_extendv8qiv8di2_2 */
    case 4569:  /* *sse4_1_zero_extendv4hiv4si2_2 */
    case 4567:  /* *sse4_1_sign_extendv4hiv4si2_2 */
    case 4537:  /* *avx2_zero_extendv8qiv8si2_2 */
    case 4535:  /* *avx2_sign_extendv8qiv8si2_2 */
    case 4521:  /* *sse4_1_zero_extendv8qiv8hi2_2 */
    case 4519:  /* *sse4_1_sign_extendv8qiv8hi2_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      break;

    case 4478:  /* *avx_blendvpd256_ltint */
    case 4477:  /* *avx_blendvps256_ltint */
    case 4476:  /* *sse4_1_blendvpd_ltint */
    case 4475:  /* *sse4_1_blendvps_ltint */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 1));
      break;

    case 4497:  /* *sse4_1_pblendvb_lt */
    case 4496:  /* *avx2_pblendvb_lt */
    case 4474:  /* *sse4_1_blendvpd_lt */
    case 4473:  /* *avx_blendvpd256_lt */
    case 4472:  /* *sse4_1_blendvps_lt */
    case 4471:  /* *avx_blendvps256_lt */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1));
      break;

    case 4401:  /* *ssse3_pmulhrswv8hi3_mask */
    case 4399:  /* *avx2_pmulhrswv16hi3_mask */
    case 4397:  /* *avx512bw_pmulhrswv32hi3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4402:  /* *ssse3_pmulhrswv4hi3 */
    case 4400:  /* *ssse3_pmulhrswv8hi3 */
    case 4398:  /* *avx2_pmulhrswv16hi3 */
    case 4396:  /* *avx512bw_pmulhrswv32hi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      break;

    case 4393:  /* avx512bw_umulhrswv32hi3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4392:  /* avx512bw_umulhrswv32hi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 1), 0));
      break;

    case 4374:  /* ssse3_phsubswv8hi3 */
    case 4373:  /* ssse3_phsubwv8hi3 */
    case 4372:  /* ssse3_phaddswv8hi3 */
    case 4371:  /* ssse3_phaddwv8hi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 1), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 0);
      recog_data.dup_num[3] = 1;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 1), 0);
      recog_data.dup_num[4] = 1;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0), 0);
      recog_data.dup_num[5] = 1;
      recog_data.dup_loc[6] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 1), 0);
      recog_data.dup_num[6] = 1;
      recog_data.dup_loc[7] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1), 0);
      recog_data.dup_num[7] = 2;
      recog_data.dup_loc[8] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 0);
      recog_data.dup_num[8] = 2;
      recog_data.dup_loc[9] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 1), 0);
      recog_data.dup_num[9] = 2;
      recog_data.dup_loc[10] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0);
      recog_data.dup_num[10] = 2;
      recog_data.dup_loc[11] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 1), 0);
      recog_data.dup_num[11] = 2;
      recog_data.dup_loc[12] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0);
      recog_data.dup_num[12] = 2;
      recog_data.dup_loc[13] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 1), 0);
      recog_data.dup_num[13] = 2;
      break;

    case 4370:  /* avx2_phsubswv16hi3 */
    case 4369:  /* avx2_phsubwv16hi3 */
    case 4368:  /* avx2_phaddswv16hi3 */
    case 4367:  /* avx2_phaddwv16hi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 1), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 0), 0);
      recog_data.dup_num[3] = 1;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 1), 0);
      recog_data.dup_num[4] = 1;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 1), 0), 0);
      recog_data.dup_num[5] = 1;
      recog_data.dup_loc[6] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 1), 1), 0);
      recog_data.dup_num[6] = 1;
      recog_data.dup_loc[7] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 1), 0);
      recog_data.dup_num[7] = 2;
      recog_data.dup_loc[8] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 1), 0), 0);
      recog_data.dup_num[8] = 2;
      recog_data.dup_loc[9] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 1), 1), 0);
      recog_data.dup_num[9] = 2;
      recog_data.dup_loc[10] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0), 0), 0);
      recog_data.dup_num[10] = 2;
      recog_data.dup_loc[11] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0), 1), 0);
      recog_data.dup_num[11] = 2;
      recog_data.dup_loc[12] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 1), 0), 0);
      recog_data.dup_num[12] = 2;
      recog_data.dup_loc[13] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 1), 1), 0);
      recog_data.dup_num[13] = 2;
      recog_data.dup_loc[14] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0), 0);
      recog_data.dup_num[14] = 1;
      recog_data.dup_loc[15] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 1), 0);
      recog_data.dup_num[15] = 1;
      recog_data.dup_loc[16] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1), 0), 0);
      recog_data.dup_num[16] = 1;
      recog_data.dup_loc[17] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1), 1), 0);
      recog_data.dup_num[17] = 1;
      recog_data.dup_loc[18] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 0), 0);
      recog_data.dup_num[18] = 1;
      recog_data.dup_loc[19] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 1), 0);
      recog_data.dup_num[19] = 1;
      recog_data.dup_loc[20] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 1), 0), 0);
      recog_data.dup_num[20] = 1;
      recog_data.dup_loc[21] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 1), 1), 0);
      recog_data.dup_num[21] = 1;
      recog_data.dup_loc[22] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[22] = 2;
      recog_data.dup_loc[23] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 1), 0);
      recog_data.dup_num[23] = 2;
      recog_data.dup_loc[24] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 1), 0), 0);
      recog_data.dup_num[24] = 2;
      recog_data.dup_loc[25] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 1), 1), 0);
      recog_data.dup_num[25] = 2;
      recog_data.dup_loc[26] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0), 0);
      recog_data.dup_num[26] = 2;
      recog_data.dup_loc[27] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 1), 0);
      recog_data.dup_num[27] = 2;
      recog_data.dup_loc[28] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 1), 0), 0);
      recog_data.dup_num[28] = 2;
      recog_data.dup_loc[29] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 1), 1), 0);
      recog_data.dup_num[29] = 2;
      break;

    case 4348:  /* *sse2_movmskpd_uext_shift */
    case 4347:  /* *sse2_movmskpd_ext_shift */
    case 4346:  /* *avx_movmskpd256_uext_shift */
    case 4345:  /* *avx_movmskpd256_ext_shift */
    case 4344:  /* *sse_movmskps_uext_shift */
    case 4343:  /* *sse_movmskps_ext_shift */
    case 4342:  /* *avx_movmskps256_uext_shift */
    case 4341:  /* *avx_movmskps256_ext_shift */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0), 0), 1));
      break;

    case 4340:  /* *sse2_movmskpd_shift */
    case 4339:  /* *avx_movmskpd256_shift */
    case 4338:  /* *sse_movmskps_shift */
    case 4337:  /* *avx_movmskps256_shift */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      break;

    case 4358:  /* *sse2_pmovmskb_ext_lt */
    case 4357:  /* *sse2_pmovmskb_zext_lt */
    case 4356:  /* *avx2_pmovmskb_zext_lt */
    case 4336:  /* *sse2_movmskpd_uext_lt */
    case 4335:  /* *sse2_movmskpd_ext_lt */
    case 4334:  /* *avx_movmskpd256_uext_lt */
    case 4333:  /* *avx_movmskpd256_ext_lt */
    case 4332:  /* *sse_movmskps_uext_lt */
    case 4331:  /* *sse_movmskps_ext_lt */
    case 4330:  /* *avx_movmskps256_uext_lt */
    case 4329:  /* *avx_movmskps256_ext_lt */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0), 1));
      break;

    case 4309:  /* *sse2_uavgv8hi3_mask */
    case 4307:  /* *avx2_uavgv16hi3_mask */
    case 4305:  /* *avx512bw_uavgv32hi3_mask */
    case 4303:  /* *sse2_uavgv16qi3_mask */
    case 4301:  /* *avx2_uavgv32qi3_mask */
    case 4299:  /* *avx512bw_uavgv64qi3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1));
      break;

    case 4308:  /* *sse2_uavgv8hi3 */
    case 4306:  /* *avx2_uavgv16hi3 */
    case 4304:  /* *avx512bw_uavgv32hi3 */
    case 4302:  /* *sse2_uavgv16qi3 */
    case 4300:  /* *avx2_uavgv32qi3 */
    case 4298:  /* *avx512bw_uavgv64qi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      break;

    case 4267:  /* sse2_pshufhw_1_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 4));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 5));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 6));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 7));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 1), 1));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4266:  /* sse2_pshufhw_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 4));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 5));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 6));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 7));
      break;

    case 4265:  /* avx2_pshufhw_1_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 4));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 5));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 6));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 7));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 12));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 13));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 14));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 15));
      ro[10] = *(ro_loc[10] = &XEXP (XEXP (pat, 1), 1));
      ro[11] = *(ro_loc[11] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4264:  /* avx2_pshufhw_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 4));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 5));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 6));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 7));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 12));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 13));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 14));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 15));
      break;

    case 4259:  /* avx2_pshuflw_1_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 8));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 9));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 10));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 11));
      ro[10] = *(ro_loc[10] = &XEXP (XEXP (pat, 1), 1));
      ro[11] = *(ro_loc[11] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4258:  /* avx2_pshuflw_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 8));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 9));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 10));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 11));
      break;

    case 4895:  /* avx512f_permv8di_1_mask */
    case 4893:  /* avx512f_permv8df_1_mask */
    case 4253:  /* avx2_pshufd_1_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 4));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 5));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 6));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 7));
      ro[10] = *(ro_loc[10] = &XEXP (XEXP (pat, 1), 1));
      ro[11] = *(ro_loc[11] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4894:  /* avx512f_permv8di_1 */
    case 4892:  /* avx512f_permv8df_1 */
    case 4252:  /* avx2_pshufd_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 4));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 5));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 6));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 7));
      break;

    case 4251:  /* avx512f_pshufd_1_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 4));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 5));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 6));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 7));
      ro[10] = *(ro_loc[10] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 8));
      ro[11] = *(ro_loc[11] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 9));
      ro[12] = *(ro_loc[12] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 10));
      ro[13] = *(ro_loc[13] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 11));
      ro[14] = *(ro_loc[14] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 12));
      ro[15] = *(ro_loc[15] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 13));
      ro[16] = *(ro_loc[16] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 14));
      ro[17] = *(ro_loc[17] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 15));
      ro[18] = *(ro_loc[18] = &XEXP (XEXP (pat, 1), 1));
      ro[19] = *(ro_loc[19] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4250:  /* avx512f_pshufd_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 4));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 5));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 6));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 7));
      ro[10] = *(ro_loc[10] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 8));
      ro[11] = *(ro_loc[11] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 9));
      ro[12] = *(ro_loc[12] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 10));
      ro[13] = *(ro_loc[13] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 11));
      ro[14] = *(ro_loc[14] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 12));
      ro[15] = *(ro_loc[15] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 13));
      ro[16] = *(ro_loc[16] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 14));
      ro[17] = *(ro_loc[17] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 15));
      break;

    case 5144:  /* vec_set_lo_v8sf_mask */
    case 5142:  /* vec_set_lo_v8si_mask */
    case 5136:  /* vec_set_lo_v4df_mask */
    case 5134:  /* vec_set_lo_v4di_mask */
    case 4229:  /* vec_set_lo_v8di_mask */
    case 4227:  /* vec_set_lo_v8df_mask */
    case 4221:  /* vec_set_lo_v16si_mask */
    case 4219:  /* vec_set_lo_v16sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4493:  /* sse4_1_packusdw_mask */
    case 4491:  /* avx2_packusdw_mask */
    case 4489:  /* avx512bw_packusdw_mask */
    case 4165:  /* sse2_packuswb_mask */
    case 4163:  /* avx2_packuswb_mask */
    case 4161:  /* avx512bw_packuswb_mask */
    case 4159:  /* sse2_packssdw_mask */
    case 4157:  /* avx2_packssdw_mask */
    case 4155:  /* avx512bw_packssdw_mask */
    case 4153:  /* sse2_packsswb_mask */
    case 4151:  /* avx2_packsswb_mask */
    case 4149:  /* avx512bw_packsswb_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4147:  /* *avx512vl_testnmv2di3_zext_mask */
    case 4146:  /* *avx512vl_testnmv2di3_zext_mask */
    case 4145:  /* *avx512vl_testnmv2di3_zext_mask */
    case 4144:  /* *avx512vl_testnmv4di3_zext_mask */
    case 4143:  /* *avx512vl_testnmv4di3_zext_mask */
    case 4142:  /* *avx512vl_testnmv4di3_zext_mask */
    case 4141:  /* *avx512f_testnmv8di3_zext_mask */
    case 4140:  /* *avx512f_testnmv8di3_zext_mask */
    case 4139:  /* *avx512f_testnmv8di3_zext_mask */
    case 4138:  /* *avx512vl_testnmv4si3_zext_mask */
    case 4137:  /* *avx512vl_testnmv4si3_zext_mask */
    case 4136:  /* *avx512vl_testnmv4si3_zext_mask */
    case 4135:  /* *avx512vl_testnmv8si3_zext_mask */
    case 4134:  /* *avx512vl_testnmv8si3_zext_mask */
    case 4133:  /* *avx512vl_testnmv8si3_zext_mask */
    case 4132:  /* *avx512f_testnmv16si3_zext_mask */
    case 4131:  /* *avx512f_testnmv16si3_zext_mask */
    case 4130:  /* *avx512f_testnmv16si3_zext_mask */
    case 4129:  /* *avx512vl_testnmv8hi3_zext_mask */
    case 4128:  /* *avx512vl_testnmv8hi3_zext_mask */
    case 4127:  /* *avx512vl_testnmv8hi3_zext_mask */
    case 4126:  /* *avx512vl_testnmv16hi3_zext_mask */
    case 4125:  /* *avx512vl_testnmv16hi3_zext_mask */
    case 4124:  /* *avx512vl_testnmv16hi3_zext_mask */
    case 4123:  /* *avx512bw_testnmv32hi3_zext_mask */
    case 4122:  /* *avx512bw_testnmv32hi3_zext_mask */
    case 4121:  /* *avx512bw_testnmv32hi3_zext_mask */
    case 4120:  /* *avx512vl_testnmv16qi3_zext_mask */
    case 4119:  /* *avx512vl_testnmv16qi3_zext_mask */
    case 4118:  /* *avx512vl_testnmv16qi3_zext_mask */
    case 4117:  /* *avx512vl_testnmv32qi3_zext_mask */
    case 4116:  /* *avx512vl_testnmv32qi3_zext_mask */
    case 4115:  /* *avx512vl_testnmv32qi3_zext_mask */
    case 4114:  /* *avx512bw_testnmv64qi3_zext_mask */
    case 4113:  /* *avx512bw_testnmv64qi3_zext_mask */
    case 4112:  /* *avx512bw_testnmv64qi3_zext_mask */
    case 4075:  /* *avx512vl_testmv2di3_zext_mask */
    case 4074:  /* *avx512vl_testmv2di3_zext_mask */
    case 4073:  /* *avx512vl_testmv2di3_zext_mask */
    case 4072:  /* *avx512vl_testmv4di3_zext_mask */
    case 4071:  /* *avx512vl_testmv4di3_zext_mask */
    case 4070:  /* *avx512vl_testmv4di3_zext_mask */
    case 4069:  /* *avx512f_testmv8di3_zext_mask */
    case 4068:  /* *avx512f_testmv8di3_zext_mask */
    case 4067:  /* *avx512f_testmv8di3_zext_mask */
    case 4066:  /* *avx512vl_testmv4si3_zext_mask */
    case 4065:  /* *avx512vl_testmv4si3_zext_mask */
    case 4064:  /* *avx512vl_testmv4si3_zext_mask */
    case 4063:  /* *avx512vl_testmv8si3_zext_mask */
    case 4062:  /* *avx512vl_testmv8si3_zext_mask */
    case 4061:  /* *avx512vl_testmv8si3_zext_mask */
    case 4060:  /* *avx512f_testmv16si3_zext_mask */
    case 4059:  /* *avx512f_testmv16si3_zext_mask */
    case 4058:  /* *avx512f_testmv16si3_zext_mask */
    case 4057:  /* *avx512vl_testmv8hi3_zext_mask */
    case 4056:  /* *avx512vl_testmv8hi3_zext_mask */
    case 4055:  /* *avx512vl_testmv8hi3_zext_mask */
    case 4054:  /* *avx512vl_testmv16hi3_zext_mask */
    case 4053:  /* *avx512vl_testmv16hi3_zext_mask */
    case 4052:  /* *avx512vl_testmv16hi3_zext_mask */
    case 4051:  /* *avx512bw_testmv32hi3_zext_mask */
    case 4050:  /* *avx512bw_testmv32hi3_zext_mask */
    case 4049:  /* *avx512bw_testmv32hi3_zext_mask */
    case 4048:  /* *avx512vl_testmv16qi3_zext_mask */
    case 4047:  /* *avx512vl_testmv16qi3_zext_mask */
    case 4046:  /* *avx512vl_testmv16qi3_zext_mask */
    case 4045:  /* *avx512vl_testmv32qi3_zext_mask */
    case 4044:  /* *avx512vl_testmv32qi3_zext_mask */
    case 4043:  /* *avx512vl_testmv32qi3_zext_mask */
    case 4042:  /* *avx512bw_testmv64qi3_zext_mask */
    case 4041:  /* *avx512bw_testmv64qi3_zext_mask */
    case 4040:  /* *avx512bw_testmv64qi3_zext_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 5563:  /* avx512dq_vmfpclassv2df */
    case 5561:  /* avx512dq_vmfpclassv4sf */
    case 4111:  /* *avx512vl_testnmv2di3_zext */
    case 4110:  /* *avx512vl_testnmv2di3_zext */
    case 4109:  /* *avx512vl_testnmv2di3_zext */
    case 4108:  /* *avx512vl_testnmv4di3_zext */
    case 4107:  /* *avx512vl_testnmv4di3_zext */
    case 4106:  /* *avx512vl_testnmv4di3_zext */
    case 4105:  /* *avx512f_testnmv8di3_zext */
    case 4104:  /* *avx512f_testnmv8di3_zext */
    case 4103:  /* *avx512f_testnmv8di3_zext */
    case 4102:  /* *avx512vl_testnmv4si3_zext */
    case 4101:  /* *avx512vl_testnmv4si3_zext */
    case 4100:  /* *avx512vl_testnmv4si3_zext */
    case 4099:  /* *avx512vl_testnmv8si3_zext */
    case 4098:  /* *avx512vl_testnmv8si3_zext */
    case 4097:  /* *avx512vl_testnmv8si3_zext */
    case 4096:  /* *avx512f_testnmv16si3_zext */
    case 4095:  /* *avx512f_testnmv16si3_zext */
    case 4094:  /* *avx512f_testnmv16si3_zext */
    case 4093:  /* *avx512vl_testnmv8hi3_zext */
    case 4092:  /* *avx512vl_testnmv8hi3_zext */
    case 4091:  /* *avx512vl_testnmv8hi3_zext */
    case 4090:  /* *avx512vl_testnmv16hi3_zext */
    case 4089:  /* *avx512vl_testnmv16hi3_zext */
    case 4088:  /* *avx512vl_testnmv16hi3_zext */
    case 4087:  /* *avx512bw_testnmv32hi3_zext */
    case 4086:  /* *avx512bw_testnmv32hi3_zext */
    case 4085:  /* *avx512bw_testnmv32hi3_zext */
    case 4084:  /* *avx512vl_testnmv16qi3_zext */
    case 4083:  /* *avx512vl_testnmv16qi3_zext */
    case 4082:  /* *avx512vl_testnmv16qi3_zext */
    case 4081:  /* *avx512vl_testnmv32qi3_zext */
    case 4080:  /* *avx512vl_testnmv32qi3_zext */
    case 4079:  /* *avx512vl_testnmv32qi3_zext */
    case 4078:  /* *avx512bw_testnmv64qi3_zext */
    case 4077:  /* *avx512bw_testnmv64qi3_zext */
    case 4076:  /* *avx512bw_testnmv64qi3_zext */
    case 4039:  /* *avx512vl_testmv2di3_zext */
    case 4038:  /* *avx512vl_testmv2di3_zext */
    case 4037:  /* *avx512vl_testmv2di3_zext */
    case 4036:  /* *avx512vl_testmv4di3_zext */
    case 4035:  /* *avx512vl_testmv4di3_zext */
    case 4034:  /* *avx512vl_testmv4di3_zext */
    case 4033:  /* *avx512f_testmv8di3_zext */
    case 4032:  /* *avx512f_testmv8di3_zext */
    case 4031:  /* *avx512f_testmv8di3_zext */
    case 4030:  /* *avx512vl_testmv4si3_zext */
    case 4029:  /* *avx512vl_testmv4si3_zext */
    case 4028:  /* *avx512vl_testmv4si3_zext */
    case 4027:  /* *avx512vl_testmv8si3_zext */
    case 4026:  /* *avx512vl_testmv8si3_zext */
    case 4025:  /* *avx512vl_testmv8si3_zext */
    case 4024:  /* *avx512f_testmv16si3_zext */
    case 4023:  /* *avx512f_testmv16si3_zext */
    case 4022:  /* *avx512f_testmv16si3_zext */
    case 4021:  /* *avx512vl_testmv8hi3_zext */
    case 4020:  /* *avx512vl_testmv8hi3_zext */
    case 4019:  /* *avx512vl_testmv8hi3_zext */
    case 4018:  /* *avx512vl_testmv16hi3_zext */
    case 4017:  /* *avx512vl_testmv16hi3_zext */
    case 4016:  /* *avx512vl_testmv16hi3_zext */
    case 4015:  /* *avx512bw_testmv32hi3_zext */
    case 4014:  /* *avx512bw_testmv32hi3_zext */
    case 4013:  /* *avx512bw_testmv32hi3_zext */
    case 4012:  /* *avx512vl_testmv16qi3_zext */
    case 4011:  /* *avx512vl_testmv16qi3_zext */
    case 4010:  /* *avx512vl_testmv16qi3_zext */
    case 4009:  /* *avx512vl_testmv32qi3_zext */
    case 4008:  /* *avx512vl_testmv32qi3_zext */
    case 4007:  /* *avx512vl_testmv32qi3_zext */
    case 4006:  /* *avx512bw_testmv64qi3_zext */
    case 4005:  /* *avx512bw_testmv64qi3_zext */
    case 4004:  /* *avx512bw_testmv64qi3_zext */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      break;

    case 5880:  /* avx512vl_vpshufbitqmbv16qi_mask */
    case 5878:  /* avx512vl_vpshufbitqmbv32qi_mask */
    case 5876:  /* avx512vl_vpshufbitqmbv64qi_mask */
    case 5560:  /* avx512dq_fpclassv2df_mask */
    case 5558:  /* avx512dq_fpclassv4df_mask */
    case 5556:  /* avx512dq_fpclassv8df_mask */
    case 5554:  /* avx512dq_fpclassv4sf_mask */
    case 5552:  /* avx512dq_fpclassv8sf_mask */
    case 5550:  /* avx512dq_fpclassv16sf_mask */
    case 5248:  /* *vcvtps2ph */
    case 4003:  /* avx512vl_testnmv2di3_mask */
    case 4001:  /* avx512vl_testnmv4di3_mask */
    case 3999:  /* avx512f_testnmv8di3_mask */
    case 3997:  /* avx512vl_testnmv4si3_mask */
    case 3995:  /* avx512vl_testnmv8si3_mask */
    case 3993:  /* avx512f_testnmv16si3_mask */
    case 3991:  /* avx512vl_testnmv8hi3_mask */
    case 3989:  /* avx512vl_testnmv16hi3_mask */
    case 3987:  /* avx512bw_testnmv32hi3_mask */
    case 3985:  /* avx512vl_testnmv16qi3_mask */
    case 3983:  /* avx512vl_testnmv32qi3_mask */
    case 3981:  /* avx512bw_testnmv64qi3_mask */
    case 3979:  /* avx512vl_testmv2di3_mask */
    case 3977:  /* avx512vl_testmv4di3_mask */
    case 3975:  /* avx512f_testmv8di3_mask */
    case 3973:  /* avx512vl_testmv4si3_mask */
    case 3971:  /* avx512vl_testmv8si3_mask */
    case 3969:  /* avx512f_testmv16si3_mask */
    case 3967:  /* avx512vl_testmv8hi3_mask */
    case 3965:  /* avx512vl_testmv16hi3_mask */
    case 3963:  /* avx512bw_testmv32hi3_mask */
    case 3961:  /* avx512vl_testmv16qi3_mask */
    case 3959:  /* avx512vl_testmv32qi3_mask */
    case 3957:  /* avx512bw_testmv64qi3_mask */
    case 3820:  /* avx512vl_gtv8hi3_mask */
    case 3818:  /* avx512vl_gtv16hi3_mask */
    case 3816:  /* avx512bw_gtv32hi3_mask */
    case 3814:  /* avx512vl_gtv32qi3_mask */
    case 3812:  /* avx512vl_gtv16qi3_mask */
    case 3810:  /* avx512bw_gtv64qi3_mask */
    case 3808:  /* avx512vl_gtv2di3_mask */
    case 3806:  /* avx512vl_gtv4di3_mask */
    case 3804:  /* avx512f_gtv8di3_mask */
    case 3802:  /* avx512vl_gtv4si3_mask */
    case 3800:  /* avx512vl_gtv8si3_mask */
    case 3798:  /* avx512f_gtv16si3_mask */
    case 3787:  /* avx512vl_eqv2di3_mask_1 */
    case 3785:  /* avx512vl_eqv4di3_mask_1 */
    case 3783:  /* avx512f_eqv8di3_mask_1 */
    case 3781:  /* avx512vl_eqv4si3_mask_1 */
    case 3779:  /* avx512vl_eqv8si3_mask_1 */
    case 3777:  /* avx512f_eqv16si3_mask_1 */
    case 3775:  /* avx512vl_eqv8hi3_mask_1 */
    case 3773:  /* avx512vl_eqv16hi3_mask_1 */
    case 3771:  /* avx512bw_eqv32hi3_mask_1 */
    case 3769:  /* avx512vl_eqv32qi3_mask_1 */
    case 3767:  /* avx512vl_eqv16qi3_mask_1 */
    case 3765:  /* avx512bw_eqv64qi3_mask_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 3483:  /* *sse4_1_mulv2siv2di3_mask */
    case 3481:  /* *vec_widen_smult_even_v8si_mask */
    case 3479:  /* *vec_widen_smult_even_v16si_mask */
    case 3477:  /* *vec_widen_umult_even_v4si_mask */
    case 3475:  /* *vec_widen_umult_even_v8si_mask */
    case 3473:  /* *vec_widen_umult_even_v16si_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3471:  /* *umulv8hi3_highpart_mask */
    case 3469:  /* *smulv8hi3_highpart_mask */
    case 3467:  /* *umulv16hi3_highpart_mask */
    case 3465:  /* *smulv16hi3_highpart_mask */
    case 3463:  /* *umulv32hi3_highpart_mask */
    case 3461:  /* *smulv32hi3_highpart_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3345:  /* avx512f_us_truncatev8div16qi2_mask_store */
    case 3344:  /* avx512f_truncatev8div16qi2_mask_store */
    case 3343:  /* avx512f_ss_truncatev8div16qi2_mask_store */
    case 3330:  /* avx512vl_us_truncatev2div2si2_mask_store */
    case 3329:  /* avx512vl_truncatev2div2si2_mask_store */
    case 3328:  /* avx512vl_ss_truncatev2div2si2_mask_store */
    case 3315:  /* avx512vl_us_truncatev2div2hi2_mask_store */
    case 3314:  /* avx512vl_truncatev2div2hi2_mask_store */
    case 3313:  /* avx512vl_ss_truncatev2div2hi2_mask_store */
    case 3303:  /* avx512vl_us_truncatev4div4hi2_mask_store */
    case 3302:  /* avx512vl_truncatev4div4hi2_mask_store */
    case 3301:  /* avx512vl_ss_truncatev4div4hi2_mask_store */
    case 3300:  /* avx512vl_us_truncatev4siv4hi2_mask_store */
    case 3299:  /* avx512vl_truncatev4siv4hi2_mask_store */
    case 3298:  /* avx512vl_ss_truncatev4siv4hi2_mask_store */
    case 3270:  /* avx512vl_us_truncatev8siv8qi2_mask_store */
    case 3269:  /* avx512vl_truncatev8siv8qi2_mask_store */
    case 3268:  /* avx512vl_ss_truncatev8siv8qi2_mask_store */
    case 3267:  /* avx512vl_us_truncatev8hiv8qi2_mask_store */
    case 3266:  /* avx512vl_truncatev8hiv8qi2_mask_store */
    case 3265:  /* avx512vl_ss_truncatev8hiv8qi2_mask_store */
    case 3246:  /* avx512vl_us_truncatev4div4qi2_mask_store */
    case 3245:  /* avx512vl_truncatev4div4qi2_mask_store */
    case 3244:  /* avx512vl_ss_truncatev4div4qi2_mask_store */
    case 3243:  /* avx512vl_us_truncatev4siv4qi2_mask_store */
    case 3242:  /* avx512vl_truncatev4siv4qi2_mask_store */
    case 3241:  /* avx512vl_ss_truncatev4siv4qi2_mask_store */
    case 3222:  /* avx512vl_us_truncatev2div2qi2_mask_store */
    case 3221:  /* avx512vl_truncatev2div2qi2_mask_store */
    case 3220:  /* avx512vl_ss_truncatev2div2qi2_mask_store */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0);
      recog_data.dup_num[1] = 0;
      break;

    case 3336:  /* *avx512f_us_truncatev8div16qi2_store */
    case 3335:  /* *avx512f_truncatev8div16qi2_store */
    case 3334:  /* *avx512f_ss_truncatev8div16qi2_store */
    case 3321:  /* *avx512vl_us_truncatev2div2si2_store */
    case 3320:  /* *avx512vl_truncatev2div2si2_store */
    case 3319:  /* *avx512vl_ss_truncatev2div2si2_store */
    case 3306:  /* *avx512vl_us_truncatev2div2hi2_store */
    case 3305:  /* *avx512vl_truncatev2div2hi2_store */
    case 3304:  /* *avx512vl_ss_truncatev2div2hi2_store */
    case 3285:  /* *avx512vl_us_truncatev4div4hi2_store */
    case 3284:  /* *avx512vl_truncatev4div4hi2_store */
    case 3283:  /* *avx512vl_ss_truncatev4div4hi2_store */
    case 3282:  /* *avx512vl_us_truncatev4siv4hi2_store */
    case 3281:  /* *avx512vl_truncatev4siv4hi2_store */
    case 3280:  /* *avx512vl_ss_truncatev4siv4hi2_store */
    case 3252:  /* *avx512vl_us_truncatev8siv8qi2_store */
    case 3251:  /* *avx512vl_truncatev8siv8qi2_store */
    case 3250:  /* *avx512vl_ss_truncatev8siv8qi2_store */
    case 3249:  /* *avx512vl_us_truncatev8hiv8qi2_store */
    case 3248:  /* *avx512vl_truncatev8hiv8qi2_store */
    case 3247:  /* *avx512vl_ss_truncatev8hiv8qi2_store */
    case 3228:  /* *avx512vl_us_truncatev4div4qi2_store */
    case 3227:  /* *avx512vl_truncatev4div4qi2_store */
    case 3226:  /* *avx512vl_ss_truncatev4div4qi2_store */
    case 3225:  /* *avx512vl_us_truncatev4siv4qi2_store */
    case 3224:  /* *avx512vl_truncatev4siv4qi2_store */
    case 3223:  /* *avx512vl_ss_truncatev4siv4qi2_store */
    case 3213:  /* *avx512vl_us_truncatev2div2qi2_store */
    case 3212:  /* *avx512vl_truncatev2div2qi2_store */
    case 3211:  /* *avx512vl_ss_truncatev2div2qi2_store */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 3135:  /* sse2_shufpd_v2df */
    case 3134:  /* sse2_shufpd_v2di */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      break;

    case 3121:  /* sse2_shufpd_v2df_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4249:  /* avx512f_shuf_i32x4_1_mask */
    case 4247:  /* avx512f_shuf_f32x4_1_mask */
    case 3116:  /* avx512f_shufps512_1_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 3));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 4));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 5));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 6));
      ro[10] = *(ro_loc[10] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 7));
      ro[11] = *(ro_loc[11] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 8));
      ro[12] = *(ro_loc[12] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 9));
      ro[13] = *(ro_loc[13] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 10));
      ro[14] = *(ro_loc[14] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 11));
      ro[15] = *(ro_loc[15] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 12));
      ro[16] = *(ro_loc[16] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 13));
      ro[17] = *(ro_loc[17] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 14));
      ro[18] = *(ro_loc[18] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 15));
      ro[19] = *(ro_loc[19] = &XEXP (XEXP (pat, 1), 1));
      ro[20] = *(ro_loc[20] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4248:  /* avx512f_shuf_i32x4_1 */
    case 4246:  /* avx512f_shuf_f32x4_1 */
    case 3115:  /* avx512f_shufps512_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 4));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 5));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 6));
      ro[10] = *(ro_loc[10] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 7));
      ro[11] = *(ro_loc[11] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 8));
      ro[12] = *(ro_loc[12] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 9));
      ro[13] = *(ro_loc[13] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 10));
      ro[14] = *(ro_loc[14] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 11));
      ro[15] = *(ro_loc[15] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 12));
      ro[16] = *(ro_loc[16] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 13));
      ro[17] = *(ro_loc[17] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 14));
      ro[18] = *(ro_loc[18] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 15));
      break;

    case 3114:  /* *avx512f_rndscalev2df_round */
    case 3112:  /* *avx512f_rndscalev4sf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 4671:  /* *sse4_1_roundsd */
    case 4670:  /* *sse4_1_roundss */
    case 3113:  /* *avx512f_rndscalev2df */
    case 3111:  /* *avx512f_rndscalev4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      break;

    case 3110:  /* avx512f_rndscalev2df_mask_round */
    case 3106:  /* avx512f_rndscalev4sf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 3109:  /* avx512f_rndscalev2df_round */
    case 3105:  /* avx512f_rndscalev4sf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 3108:  /* avx512f_rndscalev2df_mask */
    case 3104:  /* avx512f_rndscalev4sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 4669:  /* sse4_1_roundsd */
    case 4668:  /* sse4_1_roundss */
    case 3107:  /* avx512f_rndscalev2df */
    case 3103:  /* avx512f_rndscalev4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      break;

    case 3078:  /* avx512f_sfixupimmv2df_mask_round */
    case 3076:  /* avx512f_sfixupimmv4sf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 3077:  /* avx512f_sfixupimmv2df_mask */
    case 3075:  /* avx512f_sfixupimmv4sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 3074:  /* avx512f_sfixupimmv2df_maskz_1_round */
    case 3070:  /* avx512f_sfixupimmv4sf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3073:  /* avx512f_sfixupimmv2df_maskz_1 */
    case 3069:  /* avx512f_sfixupimmv4sf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3072:  /* avx512f_sfixupimmv2df_round */
    case 3068:  /* avx512f_sfixupimmv4sf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3071:  /* avx512f_sfixupimmv2df */
    case 3067:  /* avx512f_sfixupimmv4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 3));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3066:  /* avx512vl_fixupimmv2df_mask_round */
    case 3064:  /* avx512vl_fixupimmv4df_mask_round */
    case 3062:  /* avx512f_fixupimmv8df_mask_round */
    case 3060:  /* avx512vl_fixupimmv4sf_mask_round */
    case 3058:  /* avx512vl_fixupimmv8sf_mask_round */
    case 3056:  /* avx512f_fixupimmv16sf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3054:  /* avx512vl_fixupimmv2df_maskz_1_round */
    case 3050:  /* avx512vl_fixupimmv4df_maskz_1_round */
    case 3046:  /* avx512f_fixupimmv8df_maskz_1_round */
    case 3042:  /* avx512vl_fixupimmv4sf_maskz_1_round */
    case 3038:  /* avx512vl_fixupimmv8sf_maskz_1_round */
    case 3034:  /* avx512f_fixupimmv16sf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 3052:  /* avx512vl_fixupimmv2df_round */
    case 3048:  /* avx512vl_fixupimmv4df_round */
    case 3044:  /* avx512f_fixupimmv8df_round */
    case 3040:  /* avx512vl_fixupimmv4sf_round */
    case 3036:  /* avx512vl_fixupimmv8sf_round */
    case 3032:  /* avx512f_fixupimmv16sf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 3065:  /* avx512vl_fixupimmv2df_mask */
    case 3063:  /* avx512vl_fixupimmv4df_mask */
    case 3061:  /* avx512f_fixupimmv8df_mask */
    case 3059:  /* avx512vl_fixupimmv4sf_mask */
    case 3057:  /* avx512vl_fixupimmv8sf_mask */
    case 3055:  /* avx512f_fixupimmv16sf_mask */
    case 2986:  /* avx512vl_vternlogv2di_mask */
    case 2985:  /* avx512vl_vternlogv4di_mask */
    case 2984:  /* avx512f_vternlogv8di_mask */
    case 2983:  /* avx512vl_vternlogv4si_mask */
    case 2982:  /* avx512vl_vternlogv8si_mask */
    case 2981:  /* avx512f_vternlogv16si_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3053:  /* avx512vl_fixupimmv2df_maskz_1 */
    case 3049:  /* avx512vl_fixupimmv4df_maskz_1 */
    case 3045:  /* avx512f_fixupimmv8df_maskz_1 */
    case 3041:  /* avx512vl_fixupimmv4sf_maskz_1 */
    case 3037:  /* avx512vl_fixupimmv8sf_maskz_1 */
    case 3033:  /* avx512f_fixupimmv16sf_maskz_1 */
    case 2980:  /* avx512vl_vternlogv2di_maskz_1 */
    case 2978:  /* avx512vl_vternlogv4di_maskz_1 */
    case 2976:  /* avx512f_vternlogv8di_maskz_1 */
    case 2974:  /* avx512vl_vternlogv4si_maskz_1 */
    case 2972:  /* avx512vl_vternlogv8si_maskz_1 */
    case 2970:  /* avx512f_vternlogv16si_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4818:  /* xop_vpermil2v2df3 */
    case 4817:  /* xop_vpermil2v4df3 */
    case 4816:  /* xop_vpermil2v4sf3 */
    case 4815:  /* xop_vpermil2v8sf3 */
    case 4459:  /* sse4a_insertqi */
    case 3051:  /* avx512vl_fixupimmv2df */
    case 3047:  /* avx512vl_fixupimmv4df */
    case 3043:  /* avx512f_fixupimmv8df */
    case 3039:  /* avx512vl_fixupimmv4sf */
    case 3035:  /* avx512vl_fixupimmv8sf */
    case 3031:  /* avx512f_fixupimmv16sf */
    case 2979:  /* avx512vl_vternlogv2di */
    case 2977:  /* avx512vl_vternlogv4di */
    case 2975:  /* avx512f_vternlogv8di */
    case 2973:  /* avx512vl_vternlogv4si */
    case 2971:  /* avx512vl_vternlogv8si */
    case 2969:  /* avx512f_vternlogv16si */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 3));
      break;

    case 3018:  /* avx512f_sgetexpv2df_mask_round */
    case 3014:  /* avx512f_sgetexpv4sf_mask_round */
    case 2944:  /* avx512f_vmscalefv2df_mask_round */
    case 2940:  /* avx512f_vmscalefv4sf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3016:  /* avx512f_sgetexpv2df_mask */
    case 3012:  /* avx512f_sgetexpv4sf_mask */
    case 2943:  /* avx512f_vmscalefv2df_mask */
    case 2939:  /* avx512f_vmscalefv4sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3017:  /* avx512f_sgetexpv2df_round */
    case 3013:  /* avx512f_sgetexpv4sf_round */
    case 2942:  /* avx512f_vmscalefv2df_round */
    case 2938:  /* avx512f_vmscalefv4sf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3015:  /* avx512f_sgetexpv2df */
    case 3011:  /* avx512f_sgetexpv4sf */
    case 2941:  /* avx512f_vmscalefv2df */
    case 2937:  /* avx512f_vmscalefv4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2869:  /* *avx512dq_vextracti64x2_1 */
    case 2867:  /* *avx512dq_vextractf64x2_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      break;

    case 4891:  /* avx2_permv4df_1_mask */
    case 4889:  /* avx2_permv4di_1_mask */
    case 4261:  /* sse2_pshuflw_1_mask */
    case 4255:  /* sse2_pshufd_1_mask */
    case 2874:  /* avx512f_vextracti32x4_1_mask */
    case 2872:  /* avx512f_vextractf32x4_1_mask */
    case 2866:  /* avx512f_vextracti32x4_1_maskm */
    case 2865:  /* avx512f_vextractf32x4_1_maskm */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 1), 1));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 2870:  /* avx512dq_vextracti64x2_1_mask */
    case 2868:  /* avx512dq_vextractf64x2_1_mask */
    case 2864:  /* avx512dq_vextracti64x2_1_maskm */
    case 2863:  /* avx512dq_vextractf64x2_1_maskm */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 2858:  /* sse4_1_insertps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 4297:  /* vec_setv4di_0 */
    case 4296:  /* vec_setv8di_0 */
    case 4268:  /* sse2_loadld */
    case 3147:  /* vec_setv4df_0 */
    case 3146:  /* vec_setv8df_0 */
    case 2859:  /* vec_setv2df_0 */
    case 2857:  /* vec_setv16sf_0 */
    case 2856:  /* vec_setv16si_0 */
    case 2855:  /* vec_setv8sf_0 */
    case 2854:  /* vec_setv8si_0 */
    case 2852:  /* vec_setv4sf_0 */
    case 2851:  /* vec_setv4si_0 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 3142:  /* sse2_movsd */
    case 2841:  /* sse_movss */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 5151:  /* vec_set_lo_v32qi */
    case 5149:  /* vec_set_lo_v16hi */
    case 5143:  /* vec_set_lo_v8sf */
    case 5141:  /* vec_set_lo_v8si */
    case 5135:  /* vec_set_lo_v4df */
    case 5133:  /* vec_set_lo_v4di */
    case 4228:  /* vec_set_lo_v8di */
    case 4226:  /* vec_set_lo_v8df */
    case 4220:  /* vec_set_lo_v16si */
    case 4218:  /* vec_set_lo_v16sf */
    case 3141:  /* sse2_loadlpd */
    case 2840:  /* sse_loadlps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 4236:  /* *avx512dq_shuf_f64x2_1 */
    case 4234:  /* *avx512dq_shuf_i64x2_1 */
    case 3119:  /* avx_shufpd256_1 */
    case 2836:  /* sse_shufps_v4sf */
    case 2835:  /* sse_shufps_v4si */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      break;

    case 4237:  /* avx512dq_shuf_f64x2_1_mask */
    case 4235:  /* avx512dq_shuf_i64x2_1_mask */
    case 3120:  /* avx_shufpd256_1_mask */
    case 2834:  /* sse_shufps_v4sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 3));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 1), 1));
      ro[8] = *(ro_loc[8] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4245:  /* avx512vl_shuf_f32x4_1_mask */
    case 4243:  /* avx512vl_shuf_i32x4_1_mask */
    case 4241:  /* avx512f_shuf_i64x2_1_mask */
    case 4239:  /* avx512f_shuf_f64x2_1_mask */
    case 3118:  /* avx512f_shufpd512_1_mask */
    case 2833:  /* avx_shufps256_1_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 3));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 4));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 5));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 6));
      ro[10] = *(ro_loc[10] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 7));
      ro[11] = *(ro_loc[11] = &XEXP (XEXP (pat, 1), 1));
      ro[12] = *(ro_loc[12] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4244:  /* avx512vl_shuf_f32x4_1 */
    case 4242:  /* avx512vl_shuf_i32x4_1 */
    case 4240:  /* avx512f_shuf_i64x2_1 */
    case 4238:  /* avx512f_shuf_f64x2_1 */
    case 3117:  /* avx512f_shufpd512_1 */
    case 2832:  /* avx_shufps256_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 4));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 5));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 6));
      ro[10] = *(ro_loc[10] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 7));
      break;

    case 2831:  /* avx512f_movsldup512_mask */
    case 2829:  /* sse3_movsldup_mask */
    case 2827:  /* avx_movsldup256_mask */
    case 2825:  /* avx512f_movshdup512_mask */
    case 2823:  /* sse3_movshdup_mask */
    case 2821:  /* avx_movshdup256_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2830:  /* *avx512f_movsldup512 */
    case 2828:  /* sse3_movsldup */
    case 2826:  /* avx_movsldup256 */
    case 2824:  /* *avx512f_movshdup512 */
    case 2822:  /* sse3_movshdup */
    case 2820:  /* avx_movshdup256 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 4201:  /* vec_interleave_lowv4si_mask */
    case 4199:  /* avx512f_interleave_lowv16si_mask */
    case 4197:  /* avx2_interleave_lowv8si_mask */
    case 4195:  /* vec_interleave_highv4si_mask */
    case 4193:  /* avx512f_interleave_highv16si_mask */
    case 4191:  /* avx2_interleave_highv8si_mask */
    case 4189:  /* vec_interleave_lowv8hi_mask */
    case 4187:  /* avx2_interleave_lowv16hi_mask */
    case 4185:  /* avx512bw_interleave_lowv32hi_mask */
    case 4183:  /* vec_interleave_highv8hi_mask */
    case 4181:  /* avx2_interleave_highv16hi_mask */
    case 4179:  /* avx512bw_interleave_highv32hi_mask */
    case 4177:  /* vec_interleave_lowv16qi_mask */
    case 4175:  /* avx2_interleave_lowv32qi_mask */
    case 4173:  /* avx512bw_interleave_lowv64qi_mask */
    case 4171:  /* vec_interleave_highv16qi_mask */
    case 4169:  /* avx2_interleave_highv32qi_mask */
    case 4167:  /* avx512bw_interleave_highv64qi_mask */
    case 3133:  /* vec_interleave_lowv2di_mask */
    case 3131:  /* avx512f_interleave_lowv8di_mask */
    case 3129:  /* avx2_interleave_lowv4di_mask */
    case 3127:  /* vec_interleave_highv2di_mask */
    case 3125:  /* avx512f_interleave_highv8di_mask */
    case 3123:  /* avx2_interleave_highv4di_mask */
    case 2935:  /* avx512vl_unpcklpd128_mask */
    case 2934:  /* *avx_unpcklpd256_mask */
    case 2932:  /* *avx512f_unpcklpd512_mask */
    case 2929:  /* avx512vl_unpckhpd128_mask */
    case 2928:  /* avx_unpckhpd256_mask */
    case 2926:  /* avx512f_unpckhpd512_mask */
    case 2818:  /* unpcklps128_mask */
    case 2817:  /* avx_unpcklps256_mask */
    case 2815:  /* avx512f_unpcklps512_mask */
    case 2813:  /* vec_interleave_highv4sf_mask */
    case 2811:  /* avx_unpckhps256_mask */
    case 2809:  /* avx512f_unpckhps512_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 2803:  /* *avx512vl_cvtmask2qv2di */
    case 2802:  /* *avx512vl_cvtmask2qv4di */
    case 2801:  /* *avx512f_cvtmask2qv8di */
    case 2800:  /* *avx512vl_cvtmask2dv4si */
    case 2799:  /* *avx512vl_cvtmask2dv8si */
    case 2798:  /* *avx512f_cvtmask2dv16si */
    case 2797:  /* *avx512vl_cvtmask2wv8hi */
    case 2796:  /* *avx512vl_cvtmask2wv16hi */
    case 2795:  /* *avx512bw_cvtmask2wv32hi */
    case 2794:  /* *avx512vl_cvtmask2bv32qi */
    case 2793:  /* *avx512vl_cvtmask2bv16qi */
    case 2792:  /* *avx512bw_cvtmask2bv64qi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 2));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 3342:  /* *avx512f_us_truncatev8div16qi2_mask_1 */
    case 3341:  /* *avx512f_truncatev8div16qi2_mask_1 */
    case 3340:  /* *avx512f_ss_truncatev8div16qi2_mask_1 */
    case 3327:  /* *avx512vl_us_truncatev2div2si2_mask_1 */
    case 3326:  /* *avx512vl_truncatev2div2si2_mask_1 */
    case 3325:  /* *avx512vl_ss_truncatev2div2si2_mask_1 */
    case 3312:  /* *avx512vl_us_truncatev2div2hi2_mask_1 */
    case 3311:  /* *avx512vl_truncatev2div2hi2_mask_1 */
    case 3310:  /* *avx512vl_ss_truncatev2div2hi2_mask_1 */
    case 3297:  /* *avx512vl_us_truncatev4div4hi2_mask_1 */
    case 3296:  /* *avx512vl_truncatev4div4hi2_mask_1 */
    case 3295:  /* *avx512vl_ss_truncatev4div4hi2_mask_1 */
    case 3294:  /* *avx512vl_us_truncatev4siv4hi2_mask_1 */
    case 3293:  /* *avx512vl_truncatev4siv4hi2_mask_1 */
    case 3292:  /* *avx512vl_ss_truncatev4siv4hi2_mask_1 */
    case 3264:  /* *avx512vl_us_truncatev8siv8qi2_mask_1 */
    case 3263:  /* *avx512vl_truncatev8siv8qi2_mask_1 */
    case 3262:  /* *avx512vl_ss_truncatev8siv8qi2_mask_1 */
    case 3261:  /* *avx512vl_us_truncatev8hiv8qi2_mask_1 */
    case 3260:  /* *avx512vl_truncatev8hiv8qi2_mask_1 */
    case 3259:  /* *avx512vl_ss_truncatev8hiv8qi2_mask_1 */
    case 3240:  /* *avx512vl_us_truncatev4div4qi2_mask_1 */
    case 3239:  /* *avx512vl_truncatev4div4qi2_mask_1 */
    case 3238:  /* *avx512vl_ss_truncatev4div4qi2_mask_1 */
    case 3237:  /* *avx512vl_us_truncatev4siv4qi2_mask_1 */
    case 3236:  /* *avx512vl_truncatev4siv4qi2_mask_1 */
    case 3235:  /* *avx512vl_ss_truncatev4siv4qi2_mask_1 */
    case 3219:  /* *avx512vl_us_truncatev2div2qi2_mask_1 */
    case 3218:  /* *avx512vl_truncatev2div2qi2_mask_1 */
    case 3217:  /* *avx512vl_ss_truncatev2div2qi2_mask_1 */
    case 2756:  /* *sse2_cvttpd2dq_mask_1 */
    case 2697:  /* *ufix_truncv2dfv2si2_mask_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 3339:  /* avx512f_us_truncatev8div16qi2_mask */
    case 3338:  /* avx512f_truncatev8div16qi2_mask */
    case 3337:  /* avx512f_ss_truncatev8div16qi2_mask */
    case 3324:  /* avx512vl_us_truncatev2div2si2_mask */
    case 3323:  /* avx512vl_truncatev2div2si2_mask */
    case 3322:  /* avx512vl_ss_truncatev2div2si2_mask */
    case 3309:  /* avx512vl_us_truncatev2div2hi2_mask */
    case 3308:  /* avx512vl_truncatev2div2hi2_mask */
    case 3307:  /* avx512vl_ss_truncatev2div2hi2_mask */
    case 3291:  /* avx512vl_us_truncatev4div4hi2_mask */
    case 3290:  /* avx512vl_truncatev4div4hi2_mask */
    case 3289:  /* avx512vl_ss_truncatev4div4hi2_mask */
    case 3288:  /* avx512vl_us_truncatev4siv4hi2_mask */
    case 3287:  /* avx512vl_truncatev4siv4hi2_mask */
    case 3286:  /* avx512vl_ss_truncatev4siv4hi2_mask */
    case 3258:  /* avx512vl_us_truncatev8siv8qi2_mask */
    case 3257:  /* avx512vl_truncatev8siv8qi2_mask */
    case 3256:  /* avx512vl_ss_truncatev8siv8qi2_mask */
    case 3255:  /* avx512vl_us_truncatev8hiv8qi2_mask */
    case 3254:  /* avx512vl_truncatev8hiv8qi2_mask */
    case 3253:  /* avx512vl_ss_truncatev8hiv8qi2_mask */
    case 3234:  /* avx512vl_us_truncatev4div4qi2_mask */
    case 3233:  /* avx512vl_truncatev4div4qi2_mask */
    case 3232:  /* avx512vl_ss_truncatev4div4qi2_mask */
    case 3231:  /* avx512vl_us_truncatev4siv4qi2_mask */
    case 3230:  /* avx512vl_truncatev4siv4qi2_mask */
    case 3229:  /* avx512vl_ss_truncatev4siv4qi2_mask */
    case 3216:  /* avx512vl_us_truncatev2div2qi2_mask */
    case 3215:  /* avx512vl_truncatev2div2qi2_mask */
    case 3214:  /* avx512vl_ss_truncatev2div2qi2_mask */
    case 2755:  /* sse2_cvttpd2dq_mask */
    case 2696:  /* ufix_truncv2dfv2si2_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 2686:  /* *ufix_notruncv2dfv2si2_mask_1 */
    case 2675:  /* *sse2_cvtpd2dq_mask_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 2685:  /* ufix_notruncv2dfv2si2_mask */
    case 2674:  /* sse2_cvtpd2dq_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 2771:  /* *sse2_cvtpd2ps_mask_1 */
    case 2655:  /* *floatunsv2div2sf2_mask_1 */
    case 2654:  /* *floatv2div2sf2_mask_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 2770:  /* *sse2_cvtpd2ps_mask */
    case 2653:  /* *floatunsv2div2sf2_mask */
    case 2652:  /* *floatv2div2sf2_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 2565:  /* avx512dq_cvtps2uqqv2di_mask */
    case 2557:  /* avx512dq_cvtps2qqv2di_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 5247:  /* avx512f_vcvtph2ps512_mask_round */
    case 4723:  /* avx512er_rsqrt28v8df_mask_round */
    case 4719:  /* avx512er_rsqrt28v16sf_mask_round */
    case 4711:  /* avx512er_rcp28v8df_mask_round */
    case 4707:  /* avx512er_rcp28v16sf_mask_round */
    case 4703:  /* avx512er_exp2v8df_mask_round */
    case 4699:  /* avx512er_exp2v16sf_mask_round */
    case 3010:  /* avx512vl_getexpv2df_mask_round */
    case 3006:  /* avx512vl_getexpv4df_mask_round */
    case 3002:  /* avx512f_getexpv8df_mask_round */
    case 2998:  /* avx512vl_getexpv4sf_mask_round */
    case 2994:  /* avx512vl_getexpv8sf_mask_round */
    case 2990:  /* avx512f_getexpv16sf_mask_round */
    case 2729:  /* ufix_notruncv8dfv8di2_mask_round */
    case 2721:  /* fix_notruncv8dfv8di2_mask_round */
    case 2683:  /* ufix_notruncv4dfv4si2_mask_round */
    case 2679:  /* ufix_notruncv8dfv8si2_mask_round */
    case 2669:  /* avx512f_cvtpd2dq512_mask_round */
    case 2561:  /* avx512dq_cvtps2uqqv8di_mask_round */
    case 2553:  /* avx512dq_cvtps2qqv8di_mask_round */
    case 2549:  /* avx512vl_ufix_notruncv4sfv4si_mask_round */
    case 2545:  /* avx512vl_ufix_notruncv8sfv8si_mask_round */
    case 2541:  /* avx512f_ufix_notruncv16sfv16si_mask_round */
    case 2537:  /* avx512f_fix_notruncv16sfv16si_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 5245:  /* *avx512f_vcvtph2ps512_round */
    case 4721:  /* *avx512er_rsqrt28v8df_round */
    case 4717:  /* *avx512er_rsqrt28v16sf_round */
    case 4709:  /* *avx512er_rcp28v8df_round */
    case 4705:  /* *avx512er_rcp28v16sf_round */
    case 4701:  /* avx512er_exp2v8df_round */
    case 4697:  /* avx512er_exp2v16sf_round */
    case 3008:  /* avx512vl_getexpv2df_round */
    case 3004:  /* avx512vl_getexpv4df_round */
    case 3000:  /* avx512f_getexpv8df_round */
    case 2996:  /* avx512vl_getexpv4sf_round */
    case 2992:  /* avx512vl_getexpv8sf_round */
    case 2988:  /* avx512f_getexpv16sf_round */
    case 2727:  /* ufix_notruncv8dfv8di2_round */
    case 2719:  /* fix_notruncv8dfv8di2_round */
    case 2681:  /* ufix_notruncv4dfv4si2_round */
    case 2677:  /* ufix_notruncv8dfv8si2_round */
    case 2667:  /* avx512f_cvtpd2dq512_round */
    case 2559:  /* *avx512dq_cvtps2uqqv8di_round */
    case 2551:  /* *avx512dq_cvtps2qqv8di_round */
    case 2547:  /* *avx512vl_ufix_notruncv4sfv4si_round */
    case 2543:  /* *avx512vl_ufix_notruncv8sfv8si_round */
    case 2539:  /* *avx512f_ufix_notruncv16sfv16si_round */
    case 2535:  /* avx512f_fix_notruncv16sfv16si_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 2609:  /* sse2_cvttsd2siq_round */
    case 2607:  /* sse2_cvttsd2si_round */
    case 2599:  /* avx512f_vcvttsd2usiq_round */
    case 2597:  /* avx512f_vcvttsd2usi_round */
    case 2591:  /* avx512f_vcvttss2usiq_round */
    case 2589:  /* avx512f_vcvttss2usi_round */
    case 2502:  /* sse_cvttss2siq_round */
    case 2500:  /* sse_cvttss2si_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 2603:  /* sse2_cvtsd2siq_round */
    case 2601:  /* sse2_cvtsd2si_round */
    case 2595:  /* avx512f_vcvtsd2usiq_round */
    case 2593:  /* avx512f_vcvtsd2usi_round */
    case 2587:  /* avx512f_vcvtss2usiq_round */
    case 2585:  /* avx512f_vcvtss2usi_round */
    case 2496:  /* sse_cvtss2siq_round */
    case 2494:  /* sse_cvtss2si_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 2761:  /* sse2_cvtss2sd_round */
    case 2758:  /* sse2_cvtsd2ss_round */
    case 2583:  /* sse2_cvtsi2sdq_round */
    case 2509:  /* cvtusi2sd64_round */
    case 2507:  /* cvtusi2ss64_round */
    case 2504:  /* cvtusi2ss32_round */
    case 2492:  /* sse_cvtsi2ssq_round */
    case 2490:  /* sse_cvtsi2ss_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 2762:  /* *sse2_vd_cvtss2sd */
    case 2760:  /* sse2_cvtss2sd */
    case 2759:  /* *sse2_vd_cvtsd2ss */
    case 2757:  /* sse2_cvtsd2ss */
    case 2582:  /* sse2_cvtsi2sdq */
    case 2581:  /* sse2_cvtsi2sd */
    case 2508:  /* cvtusi2sd64 */
    case 2506:  /* cvtusi2ss64 */
    case 2505:  /* cvtusi2sd32 */
    case 2503:  /* cvtusi2ss32 */
    case 2491:  /* sse_cvtsi2ssq */
    case 2489:  /* sse_cvtsi2ss */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      break;

    case 5238:  /* vcvtph2ps */
    case 4353:  /* *sse2_pmovmskb_ext */
    case 4352:  /* *sse2_pmovmskb_zext */
    case 4351:  /* *avx2_pmovmskb_zext */
    case 4324:  /* *sse2_movmskpd_uext */
    case 4323:  /* *sse2_movmskpd_ext */
    case 4322:  /* *avx_movmskpd256_uext */
    case 4321:  /* *avx_movmskpd256_ext */
    case 4320:  /* *sse_movmskps_uext */
    case 4319:  /* *sse_movmskps_ext */
    case 4318:  /* *avx_movmskps256_uext */
    case 4317:  /* *avx_movmskps256_ext */
    case 2684:  /* ufix_notruncv2dfv2si2 */
    case 2673:  /* sse2_cvtpd2dq */
    case 2487:  /* sse_cvtps2pi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      break;

    case 2486:  /* sse_cvtpi2ps */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 2485:  /* *fma4i_vmfnmsub_v2df */
    case 2484:  /* *fma4i_vmfnmsub_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 2481:  /* *fma4i_vmfmsub_v2df */
    case 2480:  /* *fma4i_vmfmsub_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 2479:  /* *fma4i_vmfmadd_v2df */
    case 2478:  /* *fma4i_vmfmadd_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 2477:  /* *avx512f_vmfnmsub_v2df_maskz_1_round */
    case 2475:  /* *avx512f_vmfnmsub_v4sf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2476:  /* *avx512f_vmfnmsub_v2df_maskz_1 */
    case 2474:  /* *avx512f_vmfnmsub_v4sf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2473:  /* *avx512f_vmfnmsub_v2df_mask3_round */
    case 2471:  /* *avx512f_vmfnmsub_v4sf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 2472:  /* *avx512f_vmfnmsub_v2df_mask3 */
    case 2470:  /* *avx512f_vmfnmsub_v4sf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 2469:  /* *avx512f_vmfnmsub_v2df_mask_round */
    case 2467:  /* *avx512f_vmfnmsub_v4sf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 2468:  /* *avx512f_vmfnmsub_v2df_mask */
    case 2466:  /* *avx512f_vmfnmsub_v4sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 2465:  /* *avx512f_vmfnmadd_v2df_maskz_1_round */
    case 2463:  /* *avx512f_vmfnmadd_v4sf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2464:  /* *avx512f_vmfnmadd_v2df_maskz_1 */
    case 2462:  /* *avx512f_vmfnmadd_v4sf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2461:  /* *avx512f_vmfnmadd_v2df_mask3_round */
    case 2459:  /* *avx512f_vmfnmadd_v4sf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 2460:  /* *avx512f_vmfnmadd_v2df_mask3 */
    case 2458:  /* *avx512f_vmfnmadd_v4sf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 2457:  /* *avx512f_vmfnmadd_v2df_mask_round */
    case 2455:  /* *avx512f_vmfnmadd_v4sf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 2456:  /* *avx512f_vmfnmadd_v2df_mask */
    case 2454:  /* *avx512f_vmfnmadd_v4sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 2453:  /* *avx512f_vmfmsub_v2df_maskz_1_round */
    case 2451:  /* *avx512f_vmfmsub_v4sf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2452:  /* *avx512f_vmfmsub_v2df_maskz_1 */
    case 2450:  /* *avx512f_vmfmsub_v4sf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2449:  /* avx512f_vmfmsub_v2df_mask3_round */
    case 2447:  /* avx512f_vmfmsub_v4sf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 2448:  /* avx512f_vmfmsub_v2df_mask3 */
    case 2446:  /* avx512f_vmfmsub_v4sf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 2445:  /* *avx512f_vmfmsub_v2df_mask_round */
    case 2443:  /* *avx512f_vmfmsub_v4sf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 2444:  /* *avx512f_vmfmsub_v2df_mask */
    case 2442:  /* *avx512f_vmfmsub_v4sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 2441:  /* avx512f_vmfmadd_v2df_maskz_1_round */
    case 2439:  /* avx512f_vmfmadd_v4sf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2440:  /* avx512f_vmfmadd_v2df_maskz_1 */
    case 2438:  /* avx512f_vmfmadd_v4sf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2437:  /* avx512f_vmfmadd_v2df_mask3_round */
    case 2435:  /* avx512f_vmfmadd_v4sf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 2436:  /* avx512f_vmfmadd_v2df_mask3 */
    case 2434:  /* avx512f_vmfmadd_v4sf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 2433:  /* avx512f_vmfmadd_v2df_mask_round */
    case 2431:  /* avx512f_vmfmadd_v4sf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 2432:  /* avx512f_vmfmadd_v2df_mask */
    case 2430:  /* avx512f_vmfmadd_v4sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 2429:  /* *fmai_fnmsub_v2df_round */
    case 2427:  /* *fmai_fnmsub_v4sf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2428:  /* *fmai_fnmsub_v2df */
    case 2426:  /* *fmai_fnmsub_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2425:  /* *fmai_fnmadd_v2df_round */
    case 2423:  /* *fmai_fnmadd_v4sf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2424:  /* *fmai_fnmadd_v2df */
    case 2422:  /* *fmai_fnmadd_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2421:  /* *fmai_fmsub_v2df */
    case 2419:  /* *fmai_fmsub_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2420:  /* *fmai_fmsub_v2df */
    case 2418:  /* *fmai_fmsub_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2417:  /* *fmai_fmadd_v2df */
    case 2415:  /* *fmai_fmadd_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2416:  /* *fmai_fmadd_v2df */
    case 2414:  /* *fmai_fmadd_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2413:  /* avx512vl_fmsubadd_v2df_mask3_round */
    case 2411:  /* avx512vl_fmsubadd_v4df_mask3_round */
    case 2409:  /* avx512f_fmsubadd_v8df_mask3_round */
    case 2407:  /* avx512vl_fmsubadd_v4sf_mask3_round */
    case 2405:  /* avx512vl_fmsubadd_v8sf_mask3_round */
    case 2403:  /* avx512f_fmsubadd_v16sf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 2412:  /* avx512vl_fmsubadd_v2df_mask3 */
    case 2410:  /* avx512vl_fmsubadd_v4df_mask3 */
    case 2408:  /* avx512f_fmsubadd_v8df_mask3 */
    case 2406:  /* avx512vl_fmsubadd_v4sf_mask3 */
    case 2404:  /* avx512vl_fmsubadd_v8sf_mask3 */
    case 2402:  /* avx512f_fmsubadd_v16sf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 2401:  /* avx512vl_fmsubadd_v2df_mask_round */
    case 2399:  /* avx512vl_fmsubadd_v4df_mask_round */
    case 2397:  /* avx512f_fmsubadd_v8df_mask_round */
    case 2395:  /* avx512vl_fmsubadd_v4sf_mask_round */
    case 2393:  /* avx512vl_fmsubadd_v8sf_mask_round */
    case 2391:  /* avx512f_fmsubadd_v16sf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2400:  /* avx512vl_fmsubadd_v2df_mask */
    case 2398:  /* avx512vl_fmsubadd_v4df_mask */
    case 2396:  /* avx512f_fmsubadd_v8df_mask */
    case 2394:  /* avx512vl_fmsubadd_v4sf_mask */
    case 2392:  /* avx512vl_fmsubadd_v8sf_mask */
    case 2390:  /* avx512f_fmsubadd_v16sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2385:  /* fma_fmsubadd_v8df_maskz_1_round */
    case 2376:  /* fma_fmsubadd_v16sf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 2384:  /* *fma_fmsubadd_v8df_round */
    case 2375:  /* *fma_fmsubadd_v16sf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 2389:  /* fma_fmsubadd_v2df_maskz_1 */
    case 2387:  /* fma_fmsubadd_v4df_maskz_1 */
    case 2383:  /* fma_fmsubadd_v8df_maskz_1 */
    case 2380:  /* fma_fmsubadd_v4sf_maskz_1 */
    case 2378:  /* fma_fmsubadd_v8sf_maskz_1 */
    case 2374:  /* fma_fmsubadd_v16sf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 2388:  /* *fma_fmsubadd_v2df */
    case 2386:  /* *fma_fmsubadd_v4df */
    case 2382:  /* *fma_fmsubadd_v8df */
    case 2381:  /* *fma_fmsubadd_df */
    case 2379:  /* *fma_fmsubadd_v4sf */
    case 2377:  /* *fma_fmsubadd_v8sf */
    case 2373:  /* *fma_fmsubadd_v16sf */
    case 2372:  /* *fma_fmsubadd_sf */
    case 2371:  /* *fma_fmsubadd_v2df */
    case 2370:  /* *fma_fmsubadd_v4df */
    case 2369:  /* *fma_fmsubadd_v4sf */
    case 2368:  /* *fma_fmsubadd_v8sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0));
      break;

    case 2367:  /* avx512vl_fmaddsub_v2df_mask3_round */
    case 2365:  /* avx512vl_fmaddsub_v4df_mask3_round */
    case 2363:  /* avx512f_fmaddsub_v8df_mask3_round */
    case 2361:  /* avx512vl_fmaddsub_v4sf_mask3_round */
    case 2359:  /* avx512vl_fmaddsub_v8sf_mask3_round */
    case 2357:  /* avx512f_fmaddsub_v16sf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 2366:  /* avx512vl_fmaddsub_v2df_mask3 */
    case 2364:  /* avx512vl_fmaddsub_v4df_mask3 */
    case 2362:  /* avx512f_fmaddsub_v8df_mask3 */
    case 2360:  /* avx512vl_fmaddsub_v4sf_mask3 */
    case 2358:  /* avx512vl_fmaddsub_v8sf_mask3 */
    case 2356:  /* avx512f_fmaddsub_v16sf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 2355:  /* avx512vl_fmaddsub_v2df_mask_round */
    case 2353:  /* avx512vl_fmaddsub_v4df_mask_round */
    case 2351:  /* avx512f_fmaddsub_v8df_mask_round */
    case 2349:  /* avx512vl_fmaddsub_v4sf_mask_round */
    case 2347:  /* avx512vl_fmaddsub_v8sf_mask_round */
    case 2345:  /* avx512f_fmaddsub_v16sf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 5909:  /* avx512f_dpbf16ps_v4sf_mask */
    case 5908:  /* avx512f_dpbf16ps_v8sf_mask */
    case 5907:  /* avx512f_dpbf16ps_v16sf_mask */
    case 5856:  /* vpdpwssds_v4si_mask */
    case 5855:  /* vpdpwssds_v8si_mask */
    case 5854:  /* vpdpwssds_v16si_mask */
    case 5847:  /* vpdpwssd_v4si_mask */
    case 5846:  /* vpdpwssd_v8si_mask */
    case 5845:  /* vpdpwssd_v16si_mask */
    case 5838:  /* vpdpbusds_v4si_mask */
    case 5837:  /* vpdpbusds_v8si_mask */
    case 5836:  /* vpdpbusds_v16si_mask */
    case 5829:  /* vpdpbusd_v4si_mask */
    case 5828:  /* vpdpbusd_v8si_mask */
    case 5827:  /* vpdpbusd_v16si_mask */
    case 5814:  /* vpshldv_v2di_mask */
    case 5813:  /* vpshldv_v4si_mask */
    case 5812:  /* vpshldv_v8hi_mask */
    case 5811:  /* vpshldv_v4di_mask */
    case 5810:  /* vpshldv_v8si_mask */
    case 5809:  /* vpshldv_v16hi_mask */
    case 5808:  /* vpshldv_v8di_mask */
    case 5807:  /* vpshldv_v16si_mask */
    case 5806:  /* vpshldv_v32hi_mask */
    case 5787:  /* vpshrdv_v2di_mask */
    case 5786:  /* vpshrdv_v4si_mask */
    case 5785:  /* vpshrdv_v8hi_mask */
    case 5784:  /* vpshrdv_v4di_mask */
    case 5783:  /* vpshrdv_v8si_mask */
    case 5782:  /* vpshrdv_v16hi_mask */
    case 5781:  /* vpshrdv_v8di_mask */
    case 5780:  /* vpshrdv_v16si_mask */
    case 5779:  /* vpshrdv_v32hi_mask */
    case 5657:  /* vpamdd52huqv2di_mask */
    case 5656:  /* vpamdd52luqv2di_mask */
    case 5655:  /* vpamdd52huqv4di_mask */
    case 5654:  /* vpamdd52luqv4di_mask */
    case 5653:  /* vpamdd52huqv8di_mask */
    case 5652:  /* vpamdd52luqv8di_mask */
    case 2354:  /* avx512vl_fmaddsub_v2df_mask */
    case 2352:  /* avx512vl_fmaddsub_v4df_mask */
    case 2350:  /* avx512f_fmaddsub_v8df_mask */
    case 2348:  /* avx512vl_fmaddsub_v4sf_mask */
    case 2346:  /* avx512vl_fmaddsub_v8sf_mask */
    case 2344:  /* avx512f_fmaddsub_v16sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 5536:  /* avx512dq_rangepv8df_mask_round */
    case 5528:  /* avx512dq_rangepv16sf_mask_round */
    case 2339:  /* fma_fmaddsub_v8df_maskz_1_round */
    case 2330:  /* fma_fmaddsub_v16sf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 5906:  /* avx512f_dpbf16ps_v4sf_maskz_1 */
    case 5904:  /* avx512f_dpbf16ps_v8sf_maskz_1 */
    case 5902:  /* avx512f_dpbf16ps_v16sf_maskz_1 */
    case 5859:  /* vpdpwssds_v4si_maskz_1 */
    case 5858:  /* vpdpwssds_v8si_maskz_1 */
    case 5857:  /* vpdpwssds_v16si_maskz_1 */
    case 5850:  /* vpdpwssd_v4si_maskz_1 */
    case 5849:  /* vpdpwssd_v8si_maskz_1 */
    case 5848:  /* vpdpwssd_v16si_maskz_1 */
    case 5841:  /* vpdpbusds_v4si_maskz_1 */
    case 5840:  /* vpdpbusds_v8si_maskz_1 */
    case 5839:  /* vpdpbusds_v16si_maskz_1 */
    case 5832:  /* vpdpbusd_v4si_maskz_1 */
    case 5831:  /* vpdpbusd_v8si_maskz_1 */
    case 5830:  /* vpdpbusd_v16si_maskz_1 */
    case 5823:  /* vpshldv_v2di_maskz_1 */
    case 5822:  /* vpshldv_v4si_maskz_1 */
    case 5821:  /* vpshldv_v8hi_maskz_1 */
    case 5820:  /* vpshldv_v4di_maskz_1 */
    case 5819:  /* vpshldv_v8si_maskz_1 */
    case 5818:  /* vpshldv_v16hi_maskz_1 */
    case 5817:  /* vpshldv_v8di_maskz_1 */
    case 5816:  /* vpshldv_v16si_maskz_1 */
    case 5815:  /* vpshldv_v32hi_maskz_1 */
    case 5796:  /* vpshrdv_v2di_maskz_1 */
    case 5795:  /* vpshrdv_v4si_maskz_1 */
    case 5794:  /* vpshrdv_v8hi_maskz_1 */
    case 5793:  /* vpshrdv_v4di_maskz_1 */
    case 5792:  /* vpshrdv_v8si_maskz_1 */
    case 5791:  /* vpshrdv_v16hi_maskz_1 */
    case 5790:  /* vpshrdv_v8di_maskz_1 */
    case 5789:  /* vpshrdv_v16si_maskz_1 */
    case 5788:  /* vpshrdv_v32hi_maskz_1 */
    case 5769:  /* vpshld_v2di_mask */
    case 5767:  /* vpshld_v4si_mask */
    case 5765:  /* vpshld_v8hi_mask */
    case 5763:  /* vpshld_v4di_mask */
    case 5761:  /* vpshld_v8si_mask */
    case 5759:  /* vpshld_v16hi_mask */
    case 5757:  /* vpshld_v8di_mask */
    case 5755:  /* vpshld_v16si_mask */
    case 5753:  /* vpshld_v32hi_mask */
    case 5751:  /* vpshrd_v2di_mask */
    case 5749:  /* vpshrd_v4si_mask */
    case 5747:  /* vpshrd_v8hi_mask */
    case 5745:  /* vpshrd_v4di_mask */
    case 5743:  /* vpshrd_v8si_mask */
    case 5741:  /* vpshrd_v16hi_mask */
    case 5739:  /* vpshrd_v8di_mask */
    case 5737:  /* vpshrd_v16si_mask */
    case 5735:  /* vpshrd_v32hi_mask */
    case 5727:  /* vgf2p8affineqb_v16qi_mask */
    case 5725:  /* vgf2p8affineqb_v32qi_mask */
    case 5723:  /* vgf2p8affineqb_v64qi_mask */
    case 5721:  /* vgf2p8affineinvqb_v16qi_mask */
    case 5719:  /* vgf2p8affineinvqb_v32qi_mask */
    case 5717:  /* vgf2p8affineinvqb_v64qi_mask */
    case 5683:  /* avx5124vnniw_vp4dpwssds_maskz */
    case 5680:  /* avx5124vnniw_vp4dpwssd_maskz */
    case 5677:  /* avx5124fmaddps_4fnmaddss_maskz */
    case 5674:  /* avx5124fmaddps_4fnmaddps_maskz */
    case 5671:  /* avx5124fmaddps_4fmaddss_maskz */
    case 5668:  /* avx5124fmaddps_4fmaddps_maskz */
    case 5651:  /* vpamdd52huqv2di_maskz_1 */
    case 5649:  /* vpamdd52luqv2di_maskz_1 */
    case 5647:  /* vpamdd52huqv4di_maskz_1 */
    case 5645:  /* vpamdd52luqv4di_maskz_1 */
    case 5643:  /* vpamdd52huqv8di_maskz_1 */
    case 5641:  /* vpamdd52luqv8di_maskz_1 */
    case 5602:  /* avx512bw_dbpsadbwv32hi_mask */
    case 5600:  /* avx512bw_dbpsadbwv16hi_mask */
    case 5598:  /* avx512bw_dbpsadbwv8hi_mask */
    case 5540:  /* avx512dq_rangepv2df_mask */
    case 5538:  /* avx512dq_rangepv4df_mask */
    case 5535:  /* avx512dq_rangepv8df_mask */
    case 5532:  /* avx512dq_rangepv4sf_mask */
    case 5530:  /* avx512dq_rangepv8sf_mask */
    case 5527:  /* avx512dq_rangepv16sf_mask */
    case 5102:  /* avx512vl_vpermt2varv16qi3_maskz_1 */
    case 5100:  /* avx512vl_vpermt2varv32qi3_maskz_1 */
    case 5098:  /* avx512bw_vpermt2varv64qi3_maskz_1 */
    case 5096:  /* avx512vl_vpermt2varv8hi3_maskz_1 */
    case 5094:  /* avx512vl_vpermt2varv16hi3_maskz_1 */
    case 5092:  /* avx512bw_vpermt2varv32hi3_maskz_1 */
    case 5090:  /* avx512vl_vpermt2varv2df3_maskz_1 */
    case 5088:  /* avx512vl_vpermt2varv2di3_maskz_1 */
    case 5086:  /* avx512vl_vpermt2varv4sf3_maskz_1 */
    case 5084:  /* avx512vl_vpermt2varv4si3_maskz_1 */
    case 5082:  /* avx512vl_vpermt2varv4df3_maskz_1 */
    case 5080:  /* avx512vl_vpermt2varv4di3_maskz_1 */
    case 5078:  /* avx512vl_vpermt2varv8sf3_maskz_1 */
    case 5076:  /* avx512vl_vpermt2varv8si3_maskz_1 */
    case 5074:  /* avx512f_vpermt2varv8df3_maskz_1 */
    case 5072:  /* avx512f_vpermt2varv8di3_maskz_1 */
    case 5070:  /* avx512f_vpermt2varv16sf3_maskz_1 */
    case 5068:  /* avx512f_vpermt2varv16si3_maskz_1 */
    case 4421:  /* ssse3_palignrv16qi_mask */
    case 4420:  /* avx2_palignrv32qi_mask */
    case 4419:  /* avx512bw_palignrv64qi_mask */
    case 3030:  /* avx512vl_alignv2di_mask */
    case 3028:  /* avx512vl_alignv4di_mask */
    case 3026:  /* avx512f_alignv8di_mask */
    case 3024:  /* avx512vl_alignv4si_mask */
    case 3022:  /* avx512vl_alignv8si_mask */
    case 3020:  /* avx512f_alignv16si_mask */
    case 2343:  /* fma_fmaddsub_v2df_maskz_1 */
    case 2341:  /* fma_fmaddsub_v4df_maskz_1 */
    case 2337:  /* fma_fmaddsub_v8df_maskz_1 */
    case 2334:  /* fma_fmaddsub_v4sf_maskz_1 */
    case 2332:  /* fma_fmaddsub_v8sf_maskz_1 */
    case 2328:  /* fma_fmaddsub_v16sf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 2321:  /* avx512vl_fnmsub_v2df_mask3_round */
    case 2319:  /* avx512vl_fnmsub_v4df_mask3_round */
    case 2317:  /* avx512f_fnmsub_v8df_mask3_round */
    case 2315:  /* avx512vl_fnmsub_v4sf_mask3_round */
    case 2313:  /* avx512vl_fnmsub_v8sf_mask3_round */
    case 2311:  /* avx512f_fnmsub_v16sf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 2320:  /* avx512vl_fnmsub_v2df_mask3 */
    case 2318:  /* avx512vl_fnmsub_v4df_mask3 */
    case 2316:  /* avx512f_fnmsub_v8df_mask3 */
    case 2314:  /* avx512vl_fnmsub_v4sf_mask3 */
    case 2312:  /* avx512vl_fnmsub_v8sf_mask3 */
    case 2310:  /* avx512f_fnmsub_v16sf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 2307:  /* avx512f_fnmsub_v8df_mask_round */
    case 2303:  /* avx512f_fnmsub_v16sf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2309:  /* avx512vl_fnmsub_v2df_mask */
    case 2308:  /* avx512vl_fnmsub_v4df_mask */
    case 2306:  /* avx512f_fnmsub_v8df_mask */
    case 2305:  /* avx512vl_fnmsub_v4sf_mask */
    case 2304:  /* avx512vl_fnmsub_v8sf_mask */
    case 2302:  /* avx512f_fnmsub_v16sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2301:  /* *fma_fnmsub_v8df_maskz_1_bcst_3 */
    case 2299:  /* *fma_fnmsub_v16sf_maskz_1_bcst_3 */
    case 2297:  /* *fma_fnmsub_v4df_maskz_1_bcst_3 */
    case 2295:  /* *fma_fnmsub_v8sf_maskz_1_bcst_3 */
    case 2293:  /* *fma_fnmsub_v2df_maskz_1_bcst_3 */
    case 2291:  /* *fma_fnmsub_v4sf_maskz_1_bcst_3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 2300:  /* **fma_fnmsub_v8df_bcst_3 */
    case 2298:  /* **fma_fnmsub_v16sf_bcst_3 */
    case 2296:  /* **fma_fnmsub_v4df_bcst_3 */
    case 2294:  /* **fma_fnmsub_v8sf_bcst_3 */
    case 2292:  /* **fma_fnmsub_v2df_bcst_3 */
    case 2290:  /* **fma_fnmsub_v4sf_bcst_3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      break;

    case 2289:  /* *fma_fnmsub_v8df_maskz_1_bcst_2 */
    case 2287:  /* *fma_fnmsub_v16sf_maskz_1_bcst_2 */
    case 2285:  /* *fma_fnmsub_v4df_maskz_1_bcst_2 */
    case 2283:  /* *fma_fnmsub_v8sf_maskz_1_bcst_2 */
    case 2281:  /* *fma_fnmsub_v2df_maskz_1_bcst_2 */
    case 2279:  /* *fma_fnmsub_v4sf_maskz_1_bcst_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 2288:  /* **fma_fnmsub_v8df_bcst_2 */
    case 2286:  /* **fma_fnmsub_v16sf_bcst_2 */
    case 2284:  /* **fma_fnmsub_v4df_bcst_2 */
    case 2282:  /* **fma_fnmsub_v8sf_bcst_2 */
    case 2280:  /* **fma_fnmsub_v2df_bcst_2 */
    case 2278:  /* **fma_fnmsub_v4sf_bcst_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      break;

    case 2277:  /* *fma_fnmsub_v8df_maskz_1_bcst_1 */
    case 2275:  /* *fma_fnmsub_v16sf_maskz_1_bcst_1 */
    case 2273:  /* *fma_fnmsub_v4df_maskz_1_bcst_1 */
    case 2271:  /* *fma_fnmsub_v8sf_maskz_1_bcst_1 */
    case 2269:  /* *fma_fnmsub_v2df_maskz_1_bcst_1 */
    case 2267:  /* *fma_fnmsub_v4sf_maskz_1_bcst_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 2276:  /* **fma_fnmsub_v8df_bcst_1 */
    case 2274:  /* **fma_fnmsub_v16sf_bcst_1 */
    case 2272:  /* **fma_fnmsub_v4df_bcst_1 */
    case 2270:  /* **fma_fnmsub_v8sf_bcst_1 */
    case 2268:  /* **fma_fnmsub_v2df_bcst_1 */
    case 2266:  /* **fma_fnmsub_v4sf_bcst_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 2), 0), 0));
      break;

    case 2261:  /* fma_fnmsub_v8df_maskz_1_round */
    case 2252:  /* fma_fnmsub_v16sf_maskz_1_round */
    case 2247:  /* *fma_fnmsub_v4df */
    case 2243:  /* *fma_fnmsub_v8sf */
    case 2239:  /* *fma_fnmsub_v2df */
    case 2235:  /* *fma_fnmsub_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 2260:  /* *fma_fnmsub_v8df_round */
    case 2251:  /* *fma_fnmsub_v16sf_round */
    case 2246:  /* *fma_fnmsub_v4df */
    case 2242:  /* *fma_fnmsub_v8sf */
    case 2238:  /* *fma_fnmsub_v2df */
    case 2234:  /* *fma_fnmsub_v4sf */
    case 2231:  /* *fma_fnmsub_df */
    case 2229:  /* *fma_fnmsub_sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 2225:  /* avx512f_fnmadd_v8df_mask3_round */
    case 2221:  /* avx512f_fnmadd_v16sf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 2227:  /* avx512vl_fnmadd_v2df_mask3 */
    case 2226:  /* avx512vl_fnmadd_v4df_mask3 */
    case 2224:  /* avx512f_fnmadd_v8df_mask3 */
    case 2223:  /* avx512vl_fnmadd_v4sf_mask3 */
    case 2222:  /* avx512vl_fnmadd_v8sf_mask3 */
    case 2220:  /* avx512f_fnmadd_v16sf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 2217:  /* avx512f_fnmadd_v8df_mask_round */
    case 2213:  /* avx512f_fnmadd_v16sf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2219:  /* avx512vl_fnmadd_v2df_mask */
    case 2218:  /* avx512vl_fnmadd_v4df_mask */
    case 2216:  /* avx512f_fnmadd_v8df_mask */
    case 2215:  /* avx512vl_fnmadd_v4sf_mask */
    case 2214:  /* avx512vl_fnmadd_v8sf_mask */
    case 2212:  /* avx512f_fnmadd_v16sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2211:  /* *fma_fnmadd_v8df_maskz_1_bcst_3 */
    case 2209:  /* *fma_fnmadd_v16sf_maskz_1_bcst_3 */
    case 2207:  /* *fma_fnmadd_v4df_maskz_1_bcst_3 */
    case 2205:  /* *fma_fnmadd_v8sf_maskz_1_bcst_3 */
    case 2203:  /* *fma_fnmadd_v2df_maskz_1_bcst_3 */
    case 2201:  /* *fma_fnmadd_v4sf_maskz_1_bcst_3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 2210:  /* **fma_fnmadd_v8df_bcst_3 */
    case 2208:  /* **fma_fnmadd_v16sf_bcst_3 */
    case 2206:  /* **fma_fnmadd_v4df_bcst_3 */
    case 2204:  /* **fma_fnmadd_v8sf_bcst_3 */
    case 2202:  /* **fma_fnmadd_v2df_bcst_3 */
    case 2200:  /* **fma_fnmadd_v4sf_bcst_3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 2199:  /* *fma_fnmadd_v8df_maskz_1_bcst_2 */
    case 2197:  /* *fma_fnmadd_v16sf_maskz_1_bcst_2 */
    case 2195:  /* *fma_fnmadd_v4df_maskz_1_bcst_2 */
    case 2193:  /* *fma_fnmadd_v8sf_maskz_1_bcst_2 */
    case 2191:  /* *fma_fnmadd_v2df_maskz_1_bcst_2 */
    case 2189:  /* *fma_fnmadd_v4sf_maskz_1_bcst_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 5014:  /* avx512dq_broadcastv8sf_mask */
    case 5012:  /* avx512dq_broadcastv16sf_mask */
    case 5010:  /* avx512dq_broadcastv4si_mask */
    case 5008:  /* avx512dq_broadcastv8si_mask */
    case 5006:  /* avx512dq_broadcastv16si_mask */
    case 4937:  /* avx512vl_vec_dupv8hi_mask */
    case 4935:  /* avx512vl_vec_dupv16hi_mask */
    case 4933:  /* avx512bw_vec_dupv32hi_mask */
    case 4931:  /* avx512vl_vec_dupv32qi_mask */
    case 4929:  /* avx512vl_vec_dupv16qi_mask */
    case 4927:  /* avx512bw_vec_dupv64qi_mask */
    case 4925:  /* avx512vl_vec_dupv2df_mask */
    case 4923:  /* avx512vl_vec_dupv4df_mask */
    case 4921:  /* avx512f_vec_dupv8df_mask */
    case 4919:  /* avx512vl_vec_dupv4sf_mask */
    case 4917:  /* avx512vl_vec_dupv8sf_mask */
    case 4915:  /* avx512f_vec_dupv16sf_mask */
    case 4913:  /* avx512vl_vec_dupv2di_mask */
    case 4911:  /* avx512vl_vec_dupv4di_mask */
    case 4909:  /* avx512f_vec_dupv8di_mask */
    case 4907:  /* avx512vl_vec_dupv4si_mask */
    case 4905:  /* avx512vl_vec_dupv8si_mask */
    case 4903:  /* avx512f_vec_dupv16si_mask */
    case 4638:  /* sse4_1_zero_extendv2siv2di2_mask */
    case 4636:  /* sse4_1_sign_extendv2siv2di2_mask */
    case 4618:  /* sse4_1_zero_extendv2hiv2di2_mask */
    case 4616:  /* sse4_1_sign_extendv2hiv2di2_mask */
    case 4606:  /* avx2_zero_extendv4hiv4di2_mask */
    case 4604:  /* avx2_sign_extendv4hiv4di2_mask */
    case 4598:  /* sse4_1_zero_extendv2qiv2di2_mask */
    case 4596:  /* sse4_1_sign_extendv2qiv2di2_mask */
    case 4586:  /* avx2_zero_extendv4qiv4di2_mask */
    case 4584:  /* avx2_sign_extendv4qiv4di2_mask */
    case 4574:  /* avx512f_zero_extendv8qiv8di2_mask */
    case 4572:  /* avx512f_sign_extendv8qiv8di2_mask */
    case 4562:  /* sse4_1_zero_extendv4hiv4si2_mask */
    case 4560:  /* sse4_1_sign_extendv4hiv4si2_mask */
    case 4542:  /* sse4_1_zero_extendv4qiv4si2_mask */
    case 4540:  /* sse4_1_sign_extendv4qiv4si2_mask */
    case 4530:  /* avx2_zero_extendv8qiv8si2_mask */
    case 4528:  /* avx2_sign_extendv8qiv8si2_mask */
    case 4514:  /* sse4_1_zero_extendv8qiv8hi2_mask */
    case 4512:  /* sse4_1_sign_extendv8qiv8hi2_mask */
    case 2805:  /* sse2_cvtps2pd_mask */
    case 2749:  /* fixuns_truncv2sfv2di2_mask */
    case 2747:  /* fix_truncv2sfv2di2_mask */
    case 2665:  /* sse2_cvtdq2pd_mask */
    case 2661:  /* ufloatv2siv2df2_mask */
    case 2198:  /* **fma_fnmadd_v8df_bcst_2 */
    case 2196:  /* **fma_fnmadd_v16sf_bcst_2 */
    case 2194:  /* **fma_fnmadd_v4df_bcst_2 */
    case 2192:  /* **fma_fnmadd_v8sf_bcst_2 */
    case 2190:  /* **fma_fnmadd_v2df_bcst_2 */
    case 2188:  /* **fma_fnmadd_v4sf_bcst_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 2171:  /* fma_fnmadd_v8df_maskz_1_round */
    case 2162:  /* fma_fnmadd_v16sf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 2149:  /* avx512f_fmsub_v8df_mask3_round */
    case 2145:  /* avx512f_fmsub_v16sf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 2151:  /* avx512vl_fmsub_v2df_mask3 */
    case 2150:  /* avx512vl_fmsub_v4df_mask3 */
    case 2148:  /* avx512f_fmsub_v8df_mask3 */
    case 2147:  /* avx512vl_fmsub_v4sf_mask3 */
    case 2146:  /* avx512vl_fmsub_v8sf_mask3 */
    case 2144:  /* avx512f_fmsub_v16sf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 2143:  /* avx512vl_fmsub_v2df_mask_round */
    case 2141:  /* avx512vl_fmsub_v4df_mask_round */
    case 2139:  /* avx512f_fmsub_v8df_mask_round */
    case 2137:  /* avx512vl_fmsub_v4sf_mask_round */
    case 2135:  /* avx512vl_fmsub_v8sf_mask_round */
    case 2133:  /* avx512f_fmsub_v16sf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2142:  /* avx512vl_fmsub_v2df_mask */
    case 2140:  /* avx512vl_fmsub_v4df_mask */
    case 2138:  /* avx512f_fmsub_v8df_mask */
    case 2136:  /* avx512vl_fmsub_v4sf_mask */
    case 2134:  /* avx512vl_fmsub_v8sf_mask */
    case 2132:  /* avx512f_fmsub_v16sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2131:  /* *fma_fmsub_v8df_maskz_1_bcst_3 */
    case 2129:  /* *fma_fmsub_v16sf_maskz_1_bcst_3 */
    case 2127:  /* *fma_fmsub_v4df_maskz_1_bcst_3 */
    case 2125:  /* *fma_fmsub_v8sf_maskz_1_bcst_3 */
    case 2123:  /* *fma_fmsub_v2df_maskz_1_bcst_3 */
    case 2121:  /* *fma_fmsub_v4sf_maskz_1_bcst_3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 2265:  /* fma_fnmsub_v2df_maskz_1 */
    case 2263:  /* fma_fnmsub_v4df_maskz_1 */
    case 2259:  /* fma_fnmsub_v8df_maskz_1 */
    case 2256:  /* fma_fnmsub_v4sf_maskz_1 */
    case 2254:  /* fma_fnmsub_v8sf_maskz_1 */
    case 2250:  /* fma_fnmsub_v16sf_maskz_1 */
    case 2245:  /* *fma_fnmsub_v4df */
    case 2241:  /* *fma_fnmsub_v8sf */
    case 2237:  /* *fma_fnmsub_v2df */
    case 2233:  /* *fma_fnmsub_v4sf */
    case 2187:  /* *fma_fnmadd_v8df_maskz_1_bcst_1 */
    case 2185:  /* *fma_fnmadd_v16sf_maskz_1_bcst_1 */
    case 2183:  /* *fma_fnmadd_v4df_maskz_1_bcst_1 */
    case 2181:  /* *fma_fnmadd_v8sf_maskz_1_bcst_1 */
    case 2179:  /* *fma_fnmadd_v2df_maskz_1_bcst_1 */
    case 2177:  /* *fma_fnmadd_v4sf_maskz_1_bcst_1 */
    case 2119:  /* *fma_fmsub_v8df_maskz_1_bcst_2 */
    case 2117:  /* *fma_fmsub_v16sf_maskz_1_bcst_2 */
    case 2115:  /* *fma_fmsub_v4df_maskz_1_bcst_2 */
    case 2113:  /* *fma_fmsub_v8sf_maskz_1_bcst_2 */
    case 2111:  /* *fma_fmsub_v2df_maskz_1_bcst_2 */
    case 2109:  /* *fma_fmsub_v4sf_maskz_1_bcst_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 2264:  /* *fma_fnmsub_v2df */
    case 2262:  /* *fma_fnmsub_v4df */
    case 2258:  /* *fma_fnmsub_v8df */
    case 2257:  /* *fma_fnmsub_df */
    case 2255:  /* *fma_fnmsub_v4sf */
    case 2253:  /* *fma_fnmsub_v8sf */
    case 2249:  /* *fma_fnmsub_v16sf */
    case 2248:  /* *fma_fnmsub_sf */
    case 2244:  /* *fma_fnmsub_v4df */
    case 2240:  /* *fma_fnmsub_v8sf */
    case 2236:  /* *fma_fnmsub_v2df */
    case 2232:  /* *fma_fnmsub_v4sf */
    case 2230:  /* *fma_fnmsub_df */
    case 2228:  /* *fma_fnmsub_sf */
    case 2186:  /* **fma_fnmadd_v8df_bcst_1 */
    case 2184:  /* **fma_fnmadd_v16sf_bcst_1 */
    case 2182:  /* **fma_fnmadd_v4df_bcst_1 */
    case 2180:  /* **fma_fnmadd_v8sf_bcst_1 */
    case 2178:  /* **fma_fnmadd_v2df_bcst_1 */
    case 2176:  /* **fma_fnmadd_v4sf_bcst_1 */
    case 2118:  /* **fma_fmsub_v8df_bcst_2 */
    case 2116:  /* **fma_fmsub_v16sf_bcst_2 */
    case 2114:  /* **fma_fmsub_v4df_bcst_2 */
    case 2112:  /* **fma_fmsub_v8sf_bcst_2 */
    case 2110:  /* **fma_fmsub_v2df_bcst_2 */
    case 2108:  /* **fma_fmsub_v4sf_bcst_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      break;

    case 2107:  /* *fma_fmsub_v8df_maskz_1_bcst_1 */
    case 2105:  /* *fma_fmsub_v16sf_maskz_1_bcst_1 */
    case 2103:  /* *fma_fmsub_v4df_maskz_1_bcst_1 */
    case 2101:  /* *fma_fmsub_v8sf_maskz_1_bcst_1 */
    case 2099:  /* *fma_fmsub_v2df_maskz_1_bcst_1 */
    case 2097:  /* *fma_fmsub_v4sf_maskz_1_bcst_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 2106:  /* **fma_fmsub_v8df_bcst_1 */
    case 2104:  /* **fma_fmsub_v16sf_bcst_1 */
    case 2102:  /* **fma_fmsub_v4df_bcst_1 */
    case 2100:  /* **fma_fmsub_v8sf_bcst_1 */
    case 2098:  /* **fma_fmsub_v2df_bcst_1 */
    case 2096:  /* **fma_fmsub_v4sf_bcst_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 2), 0), 0));
      break;

    case 2091:  /* fma_fmsub_v8df_maskz_1_round */
    case 2082:  /* fma_fmsub_v16sf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 2090:  /* *fma_fmsub_v8df_round */
    case 2081:  /* *fma_fmsub_v16sf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 2071:  /* avx512vl_fmadd_v2df_mask3_round */
    case 2069:  /* avx512vl_fmadd_v4df_mask3_round */
    case 2067:  /* avx512f_fmadd_v8df_mask3_round */
    case 2065:  /* avx512vl_fmadd_v4sf_mask3_round */
    case 2063:  /* avx512vl_fmadd_v8sf_mask3_round */
    case 2061:  /* avx512f_fmadd_v16sf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 2070:  /* avx512vl_fmadd_v2df_mask3 */
    case 2068:  /* avx512vl_fmadd_v4df_mask3 */
    case 2066:  /* avx512f_fmadd_v8df_mask3 */
    case 2064:  /* avx512vl_fmadd_v4sf_mask3 */
    case 2062:  /* avx512vl_fmadd_v8sf_mask3 */
    case 2060:  /* avx512f_fmadd_v16sf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 2057:  /* avx512f_fmadd_v8df_mask_round */
    case 2053:  /* avx512f_fmadd_v16sf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2059:  /* avx512vl_fmadd_v2df_mask */
    case 2058:  /* avx512vl_fmadd_v4df_mask */
    case 2056:  /* avx512f_fmadd_v8df_mask */
    case 2055:  /* avx512vl_fmadd_v4sf_mask */
    case 2054:  /* avx512vl_fmadd_v8sf_mask */
    case 2052:  /* avx512f_fmadd_v16sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 4217:  /* avx512f_vinserti32x4_1_mask */
    case 4215:  /* avx512f_vinsertf32x4_1_mask */
    case 4213:  /* avx512dq_vinserti64x2_1_mask */
    case 4211:  /* avx512dq_vinsertf64x2_1_mask */
    case 2051:  /* *fma_fmadd_v8df_maskz_1_bcst_3 */
    case 2049:  /* *fma_fmadd_v16sf_maskz_1_bcst_3 */
    case 2047:  /* *fma_fmadd_v4df_maskz_1_bcst_3 */
    case 2045:  /* *fma_fmadd_v8sf_maskz_1_bcst_3 */
    case 2043:  /* *fma_fmadd_v2df_maskz_1_bcst_3 */
    case 2041:  /* *fma_fmadd_v4sf_maskz_1_bcst_3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4216:  /* *avx512f_vinserti32x4_1 */
    case 4214:  /* *avx512f_vinsertf32x4_1 */
    case 4212:  /* *avx512dq_vinserti64x2_1 */
    case 4210:  /* *avx512dq_vinsertf64x2_1 */
    case 4209:  /* *avx512f_vinserti32x4_0 */
    case 4208:  /* *avx512f_vinsertf32x4_0 */
    case 4207:  /* *avx512dq_vinserti64x2_0 */
    case 4206:  /* *avx512dq_vinsertf64x2_0 */
    case 2050:  /* **fma_fmadd_v8df_bcst_3 */
    case 2048:  /* **fma_fmadd_v16sf_bcst_3 */
    case 2046:  /* **fma_fmadd_v4df_bcst_3 */
    case 2044:  /* **fma_fmadd_v8sf_bcst_3 */
    case 2042:  /* **fma_fmadd_v2df_bcst_3 */
    case 2040:  /* **fma_fmadd_v4sf_bcst_3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 2175:  /* fma_fnmadd_v2df_maskz_1 */
    case 2173:  /* fma_fnmadd_v4df_maskz_1 */
    case 2169:  /* fma_fnmadd_v8df_maskz_1 */
    case 2166:  /* fma_fnmadd_v4sf_maskz_1 */
    case 2164:  /* fma_fnmadd_v8sf_maskz_1 */
    case 2160:  /* fma_fnmadd_v16sf_maskz_1 */
    case 2039:  /* *fma_fmadd_v8df_maskz_1_bcst_2 */
    case 2037:  /* *fma_fmadd_v16sf_maskz_1_bcst_2 */
    case 2035:  /* *fma_fmadd_v4df_maskz_1_bcst_2 */
    case 2033:  /* *fma_fmadd_v8sf_maskz_1_bcst_2 */
    case 2031:  /* *fma_fmadd_v2df_maskz_1_bcst_2 */
    case 2029:  /* *fma_fmadd_v4sf_maskz_1_bcst_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 2095:  /* fma_fmsub_v2df_maskz_1 */
    case 2093:  /* fma_fmsub_v4df_maskz_1 */
    case 2089:  /* fma_fmsub_v8df_maskz_1 */
    case 2086:  /* fma_fmsub_v4sf_maskz_1 */
    case 2084:  /* fma_fmsub_v8sf_maskz_1 */
    case 2080:  /* fma_fmsub_v16sf_maskz_1 */
    case 2027:  /* *fma_fmadd_v8df_maskz_1_bcst_1 */
    case 2025:  /* *fma_fmadd_v16sf_maskz_1_bcst_1 */
    case 2023:  /* *fma_fmadd_v4df_maskz_1_bcst_1 */
    case 2021:  /* *fma_fmadd_v8sf_maskz_1_bcst_1 */
    case 2019:  /* *fma_fmadd_v2df_maskz_1_bcst_1 */
    case 2017:  /* *fma_fmadd_v4sf_maskz_1_bcst_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 2094:  /* *fma_fmsub_v2df */
    case 2092:  /* *fma_fmsub_v4df */
    case 2088:  /* *fma_fmsub_v8df */
    case 2087:  /* *fma_fmsub_df */
    case 2085:  /* *fma_fmsub_v4sf */
    case 2083:  /* *fma_fmsub_v8sf */
    case 2079:  /* *fma_fmsub_v16sf */
    case 2078:  /* *fma_fmsub_sf */
    case 2077:  /* *fma_fmsub_v4df */
    case 2076:  /* *fma_fmsub_v8sf */
    case 2075:  /* *fma_fmsub_v2df */
    case 2074:  /* *fma_fmsub_v4sf */
    case 2073:  /* *fma_fmsub_df */
    case 2072:  /* *fma_fmsub_sf */
    case 2026:  /* **fma_fmadd_v8df_bcst_1 */
    case 2024:  /* **fma_fmadd_v16sf_bcst_1 */
    case 2022:  /* **fma_fmadd_v4df_bcst_1 */
    case 2020:  /* **fma_fmadd_v8sf_bcst_1 */
    case 2018:  /* **fma_fmadd_v2df_bcst_1 */
    case 2016:  /* **fma_fmadd_v4sf_bcst_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      break;

    case 2011:  /* fma_fmadd_v8df_maskz_1_round */
    case 2002:  /* fma_fmadd_v16sf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 2010:  /* *fma_fmadd_v8df_round */
    case 2001:  /* *fma_fmadd_v16sf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 2015:  /* fma_fmadd_v2df_maskz_1 */
    case 2013:  /* fma_fmadd_v4df_maskz_1 */
    case 2009:  /* fma_fmadd_v8df_maskz_1 */
    case 2006:  /* fma_fmadd_v4sf_maskz_1 */
    case 2004:  /* fma_fmadd_v8sf_maskz_1 */
    case 2000:  /* fma_fmadd_v16sf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 1931:  /* sse2_ucomi_round */
    case 1927:  /* sse_ucomi_round */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 1930:  /* sse2_ucomi */
    case 1926:  /* sse_ucomi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      break;

    case 1929:  /* sse2_comi_round */
    case 1925:  /* sse_comi_round */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 1928:  /* sse2_comi */
    case 1924:  /* sse_comi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 1923:  /* avx512f_vmcmpv2df3_mask_round */
    case 1921:  /* avx512f_vmcmpv4sf3_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 1922:  /* avx512f_vmcmpv2df3_mask */
    case 1920:  /* avx512f_vmcmpv4sf3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 1919:  /* avx512f_vmcmpv2df3_round */
    case 1917:  /* avx512f_vmcmpv4sf3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 1918:  /* avx512f_vmcmpv2df3 */
    case 1916:  /* avx512f_vmcmpv4sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      break;

    case 1875:  /* avx512f_cmpv8df3_mask_round */
    case 1867:  /* avx512f_cmpv16sf3_mask_round */
    case 1859:  /* avx512f_cmpv8di3_mask_round */
    case 1851:  /* avx512f_cmpv16si3_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 1915:  /* avx512vl_ucmpv2di3_mask */
    case 1913:  /* avx512vl_ucmpv4di3_mask */
    case 1911:  /* avx512f_ucmpv8di3_mask */
    case 1909:  /* avx512vl_ucmpv4si3_mask */
    case 1907:  /* avx512vl_ucmpv8si3_mask */
    case 1905:  /* avx512f_ucmpv16si3_mask */
    case 1903:  /* avx512vl_ucmpv8hi3_mask */
    case 1901:  /* avx512vl_ucmpv16hi3_mask */
    case 1899:  /* avx512bw_ucmpv32hi3_mask */
    case 1897:  /* avx512vl_ucmpv32qi3_mask */
    case 1895:  /* avx512vl_ucmpv16qi3_mask */
    case 1893:  /* avx512bw_ucmpv64qi3_mask */
    case 1891:  /* avx512vl_cmpv8hi3_mask */
    case 1889:  /* avx512vl_cmpv16hi3_mask */
    case 1887:  /* avx512bw_cmpv32hi3_mask */
    case 1885:  /* avx512vl_cmpv32qi3_mask */
    case 1883:  /* avx512vl_cmpv16qi3_mask */
    case 1881:  /* avx512bw_cmpv64qi3_mask */
    case 1879:  /* avx512vl_cmpv2df3_mask */
    case 1877:  /* avx512vl_cmpv4df3_mask */
    case 1874:  /* avx512f_cmpv8df3_mask */
    case 1871:  /* avx512vl_cmpv4sf3_mask */
    case 1869:  /* avx512vl_cmpv8sf3_mask */
    case 1866:  /* avx512f_cmpv16sf3_mask */
    case 1863:  /* avx512vl_cmpv2di3_mask */
    case 1861:  /* avx512vl_cmpv4di3_mask */
    case 1858:  /* avx512f_cmpv8di3_mask */
    case 1855:  /* avx512vl_cmpv4si3_mask */
    case 1853:  /* avx512vl_cmpv8si3_mask */
    case 1850:  /* avx512f_cmpv16si3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 5534:  /* avx512dq_rangepv8df_round */
    case 5526:  /* avx512dq_rangepv16sf_round */
    case 2338:  /* *fma_fmaddsub_v8df_round */
    case 2329:  /* *fma_fmaddsub_v16sf_round */
    case 1873:  /* avx512f_cmpv8df3_round */
    case 1865:  /* avx512f_cmpv16sf3_round */
    case 1857:  /* avx512f_cmpv8di3_round */
    case 1849:  /* avx512f_cmpv16si3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 1847:  /* sse2_vmmaskcmpv2df3 */
    case 1846:  /* sse_vmmaskcmpv4sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 5594:  /* avx512f_vgetmantv2df_mask */
    case 5590:  /* avx512f_vgetmantv4sf_mask */
    case 5546:  /* avx512dq_rangesv2df_mask */
    case 5542:  /* avx512dq_rangesv4sf_mask */
    case 1831:  /* reducesv2df_mask */
    case 1829:  /* reducesv4sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 5593:  /* avx512f_vgetmantv2df */
    case 5589:  /* avx512f_vgetmantv4sf */
    case 5545:  /* avx512dq_rangesv2df */
    case 5541:  /* avx512dq_rangesv4sf */
    case 1837:  /* avx_vmcmpv2df3 */
    case 1836:  /* avx_vmcmpv4sf3 */
    case 1830:  /* reducesv2df */
    case 1828:  /* reducesv4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 4382:  /* ssse3_phsubdv4si3 */
    case 4381:  /* ssse3_phadddv4si3 */
    case 4378:  /* ssse3_phsubswv4hi3 */
    case 4377:  /* ssse3_phsubwv4hi3 */
    case 4376:  /* ssse3_phaddswv4hi3 */
    case 4375:  /* ssse3_phaddwv4hi3 */
    case 1815:  /* sse3_hsubv4sf3 */
    case 1814:  /* sse3_haddv4sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0);
      recog_data.dup_num[4] = 2;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0);
      recog_data.dup_num[5] = 2;
      break;

    case 4380:  /* avx2_phsubdv8si3 */
    case 4379:  /* avx2_phadddv8si3 */
    case 1813:  /* avx_hsubv8sf3 */
    case 1812:  /* avx_haddv8sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 1), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 1), 0);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0), 0);
      recog_data.dup_num[4] = 2;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 1), 0);
      recog_data.dup_num[5] = 2;
      recog_data.dup_loc[6] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[6] = 1;
      recog_data.dup_loc[7] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1), 0);
      recog_data.dup_num[7] = 1;
      recog_data.dup_loc[8] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 0);
      recog_data.dup_num[8] = 1;
      recog_data.dup_loc[9] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 1), 0);
      recog_data.dup_num[9] = 1;
      recog_data.dup_loc[10] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0);
      recog_data.dup_num[10] = 2;
      recog_data.dup_loc[11] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 1), 0);
      recog_data.dup_num[11] = 2;
      recog_data.dup_loc[12] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0);
      recog_data.dup_num[12] = 2;
      recog_data.dup_loc[13] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 1), 0);
      recog_data.dup_num[13] = 2;
      break;

    case 1811:  /* *sse3_hsubv2df3_low */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 1810:  /* *sse3_haddv2df3_low */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 1808:  /* *sse3_haddv2df3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0, 0));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0, 0));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 1807:  /* avx_hsubv4df3 */
    case 1806:  /* avx_haddv4df3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0);
      recog_data.dup_num[3] = 1;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0);
      recog_data.dup_num[4] = 2;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0);
      recog_data.dup_num[5] = 2;
      break;

    case 1805:  /* sse3_addsubv4sf3 */
    case 1804:  /* avx_addsubv8sf3 */
    case 1803:  /* sse3_addsubv2df3 */
    case 1802:  /* avx_addsubv4df3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 1785:  /* *ieee_minv2df3 */
    case 1784:  /* *ieee_maxv2df3 */
    case 1783:  /* *ieee_minv4sf3 */
    case 1782:  /* *ieee_maxv4sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 5588:  /* avx512vl_getmantv2df_mask_round */
    case 5584:  /* avx512vl_getmantv4df_mask_round */
    case 5580:  /* avx512f_getmantv8df_mask_round */
    case 5576:  /* avx512vl_getmantv4sf_mask_round */
    case 5572:  /* avx512vl_getmantv8sf_mask_round */
    case 5568:  /* avx512f_getmantv16sf_mask_round */
    case 3102:  /* avx512vl_rndscalev2df_mask_round */
    case 3098:  /* avx512vl_rndscalev4df_mask_round */
    case 3094:  /* avx512f_rndscalev8df_mask_round */
    case 3090:  /* avx512vl_rndscalev4sf_mask_round */
    case 3086:  /* avx512vl_rndscalev8sf_mask_round */
    case 3082:  /* avx512f_rndscalev16sf_mask_round */
    case 2968:  /* avx512vl_scalefv2df_mask_round */
    case 2964:  /* avx512vl_scalefv4df_mask_round */
    case 2960:  /* avx512f_scalefv8df_mask_round */
    case 2956:  /* avx512vl_scalefv4sf_mask_round */
    case 2952:  /* avx512vl_scalefv8sf_mask_round */
    case 2948:  /* avx512f_scalefv16sf_mask_round */
    case 1773:  /* ieee_minv8df3_mask_round */
    case 1769:  /* ieee_maxv8df3_mask_round */
    case 1757:  /* ieee_minv16sf3_mask_round */
    case 1753:  /* ieee_maxv16sf3_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 5894:  /* avx512f_cvtne2ps2bf16_v8hi_mask */
    case 5892:  /* avx512f_cvtne2ps2bf16_v16hi_mask */
    case 5890:  /* avx512f_cvtne2ps2bf16_v32hi_mask */
    case 5733:  /* vgf2p8mulb_v16qi_mask */
    case 5731:  /* vgf2p8mulb_v32qi_mask */
    case 5729:  /* vgf2p8mulb_v64qi_mask */
    case 5682:  /* avx5124vnniw_vp4dpwssds_mask */
    case 5679:  /* avx5124vnniw_vp4dpwssd_mask */
    case 5676:  /* avx5124fmaddps_4fnmaddss_mask */
    case 5673:  /* avx5124fmaddps_4fnmaddps_mask */
    case 5670:  /* avx5124fmaddps_4fmaddss_mask */
    case 5667:  /* avx5124fmaddps_4fmaddps_mask */
    case 5663:  /* vpmultishiftqbv32qi_mask */
    case 5661:  /* vpmultishiftqbv16qi_mask */
    case 5659:  /* vpmultishiftqbv64qi_mask */
    case 5587:  /* avx512vl_getmantv2df_mask */
    case 5583:  /* avx512vl_getmantv4df_mask */
    case 5579:  /* avx512f_getmantv8df_mask */
    case 5575:  /* avx512vl_getmantv4sf_mask */
    case 5571:  /* avx512vl_getmantv8sf_mask */
    case 5567:  /* avx512f_getmantv16sf_mask */
    case 5254:  /* avx512f_vcvtps2ph512_mask */
    case 5252:  /* vcvtps2ph256_mask */
    case 5048:  /* avx_vpermilvarv2df3_mask */
    case 5046:  /* avx_vpermilvarv4df3_mask */
    case 5044:  /* avx512f_vpermilvarv8df3_mask */
    case 5042:  /* avx_vpermilvarv4sf3_mask */
    case 5040:  /* avx_vpermilvarv8sf3_mask */
    case 5038:  /* avx512f_vpermilvarv16sf3_mask */
    case 4872:  /* avx512bw_permvarv32hi_mask */
    case 4870:  /* avx512vl_permvarv16hi_mask */
    case 4868:  /* avx512vl_permvarv8hi_mask */
    case 4866:  /* avx512vl_permvarv32qi_mask */
    case 4864:  /* avx512vl_permvarv16qi_mask */
    case 4862:  /* avx512bw_permvarv64qi_mask */
    case 4860:  /* avx2_permvarv4df_mask */
    case 4858:  /* avx2_permvarv4di_mask */
    case 4856:  /* avx512f_permvarv8df_mask */
    case 4854:  /* avx512f_permvarv8di_mask */
    case 4852:  /* avx512f_permvarv16sf_mask */
    case 4850:  /* avx512f_permvarv16si_mask */
    case 4848:  /* avx2_permvarv8sf_mask */
    case 4846:  /* avx2_permvarv8si_mask */
    case 4408:  /* ssse3_pshufbv16qi3_mask */
    case 4406:  /* avx2_pshufbv32qi3_mask */
    case 4404:  /* avx512bw_pshufbv64qi3_mask */
    case 4391:  /* avx512bw_pmaddubsw512v32hi_mask */
    case 4389:  /* avx512bw_pmaddubsw512v16hi_mask */
    case 4387:  /* avx512bw_pmaddubsw512v8hi_mask */
    case 4263:  /* avx512bw_pshufhwv32hi_mask */
    case 4257:  /* avx512bw_pshuflwv32hi_mask */
    case 3489:  /* avx512bw_pmaddwd512v8hi_mask */
    case 3487:  /* avx512bw_pmaddwd512v16hi_mask */
    case 3485:  /* avx512bw_pmaddwd512v32hi_mask */
    case 3101:  /* avx512vl_rndscalev2df_mask */
    case 3097:  /* avx512vl_rndscalev4df_mask */
    case 3093:  /* avx512f_rndscalev8df_mask */
    case 3089:  /* avx512vl_rndscalev4sf_mask */
    case 3085:  /* avx512vl_rndscalev8sf_mask */
    case 3081:  /* avx512f_rndscalev16sf_mask */
    case 2967:  /* avx512vl_scalefv2df_mask */
    case 2963:  /* avx512vl_scalefv4df_mask */
    case 2959:  /* avx512f_scalefv8df_mask */
    case 2955:  /* avx512vl_scalefv4sf_mask */
    case 2951:  /* avx512vl_scalefv8sf_mask */
    case 2947:  /* avx512f_scalefv16sf_mask */
    case 1827:  /* reducepv2df_mask */
    case 1825:  /* reducepv4df_mask */
    case 1823:  /* reducepv8df_mask */
    case 1821:  /* reducepv4sf_mask */
    case 1819:  /* reducepv8sf_mask */
    case 1817:  /* reducepv16sf_mask */
    case 1781:  /* ieee_minv2df3_mask */
    case 1779:  /* ieee_maxv2df3_mask */
    case 1777:  /* ieee_minv4df3_mask */
    case 1775:  /* ieee_maxv4df3_mask */
    case 1772:  /* ieee_minv8df3_mask */
    case 1768:  /* ieee_maxv8df3_mask */
    case 1765:  /* ieee_minv4sf3_mask */
    case 1763:  /* ieee_maxv4sf3_mask */
    case 1761:  /* ieee_minv8sf3_mask */
    case 1759:  /* ieee_maxv8sf3_mask */
    case 1756:  /* ieee_minv16sf3_mask */
    case 1752:  /* ieee_maxv16sf3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 5586:  /* avx512vl_getmantv2df_round */
    case 5582:  /* avx512vl_getmantv4df_round */
    case 5578:  /* avx512f_getmantv8df_round */
    case 5574:  /* avx512vl_getmantv4sf_round */
    case 5570:  /* avx512vl_getmantv8sf_round */
    case 5566:  /* avx512f_getmantv16sf_round */
    case 3100:  /* avx512vl_rndscalev2df_round */
    case 3096:  /* avx512vl_rndscalev4df_round */
    case 3092:  /* avx512f_rndscalev8df_round */
    case 3088:  /* avx512vl_rndscalev4sf_round */
    case 3084:  /* avx512vl_rndscalev8sf_round */
    case 3080:  /* avx512f_rndscalev16sf_round */
    case 2966:  /* avx512vl_scalefv2df_round */
    case 2962:  /* avx512vl_scalefv4df_round */
    case 2958:  /* avx512f_scalefv8df_round */
    case 2954:  /* avx512vl_scalefv4sf_round */
    case 2950:  /* avx512vl_scalefv8sf_round */
    case 2946:  /* avx512f_scalefv16sf_round */
    case 1771:  /* ieee_minv8df3_round */
    case 1767:  /* ieee_maxv8df3_round */
    case 1755:  /* ieee_minv16sf3_round */
    case 1751:  /* ieee_maxv16sf3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 1697:  /* *sse2_vmsqrtv2df2_mask_round */
    case 1693:  /* *sse_vmsqrtv4sf2_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 1696:  /* *sse2_vmsqrtv2df2_mask */
    case 1692:  /* *sse_vmsqrtv4sf2_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 1695:  /* *sse2_vmsqrtv2df2_round */
    case 1691:  /* *sse_vmsqrtv4sf2_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 1689:  /* sse2_vmsqrtv2df2_mask_round */
    case 1685:  /* sse_vmsqrtv4sf2_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 1688:  /* sse2_vmsqrtv2df2_mask */
    case 1684:  /* sse_vmsqrtv4sf2_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 1687:  /* sse2_vmsqrtv2df2_round */
    case 1683:  /* sse_vmsqrtv4sf2_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 2775:  /* avx512f_cvtps2pd512_mask_round */
    case 2766:  /* avx512f_cvtpd2ps512_mask_round */
    case 2741:  /* fixuns_truncv8sfv8di2_mask_round */
    case 2737:  /* fix_truncv8sfv8di2_mask_round */
    case 2709:  /* fixuns_truncv8dfv8di2_mask_round */
    case 2705:  /* fix_truncv8dfv8di2_mask_round */
    case 2694:  /* fixuns_truncv8dfv8si2_mask_round */
    case 2690:  /* fix_truncv8dfv8si2_mask_round */
    case 2645:  /* floatunsv8div8sf2_mask_round */
    case 2641:  /* floatv8div8sf2_mask_round */
    case 2637:  /* floatunsv2div2df2_mask_round */
    case 2633:  /* floatv2div2df2_mask_round */
    case 2629:  /* floatunsv4div4df2_mask_round */
    case 2625:  /* floatv4div4df2_mask_round */
    case 2621:  /* floatunsv8div8df2_mask_round */
    case 2617:  /* floatv8div8df2_mask_round */
    case 2573:  /* ufix_truncv16sfv16si2_mask_round */
    case 2569:  /* fix_truncv16sfv16si2_mask_round */
    case 2529:  /* ufloatv4siv4sf2_mask_round */
    case 2525:  /* ufloatv8siv8sf2_mask_round */
    case 2521:  /* ufloatv16siv16sf2_mask_round */
    case 2513:  /* floatv16siv16sf2_mask_round */
    case 2170:  /* *fma_fnmadd_v8df_round */
    case 2161:  /* *fma_fnmadd_v16sf_round */
    case 1677:  /* avx512f_sqrtv8df2_mask_round */
    case 1669:  /* avx512f_sqrtv16sf2_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 5715:  /* vpopcountv8hi_mask */
    case 5713:  /* vpopcountv16hi_mask */
    case 5711:  /* vpopcountv32hi_mask */
    case 5709:  /* vpopcountv32qi_mask */
    case 5707:  /* vpopcountv16qi_mask */
    case 5705:  /* vpopcountv64qi_mask */
    case 5695:  /* vpopcountv2di_mask */
    case 5693:  /* vpopcountv4di_mask */
    case 5691:  /* vpopcountv8di_mask */
    case 5689:  /* vpopcountv4si_mask */
    case 5687:  /* vpopcountv8si_mask */
    case 5685:  /* vpopcountv16si_mask */
    case 5614:  /* clzv2di2_mask */
    case 5612:  /* clzv4di2_mask */
    case 5610:  /* clzv8di2_mask */
    case 5608:  /* clzv4si2_mask */
    case 5606:  /* clzv8si2_mask */
    case 5604:  /* clzv16si2_mask */
    case 5030:  /* avx512dq_broadcastv4df_mask_1 */
    case 5028:  /* avx512dq_broadcastv4di_mask_1 */
    case 5026:  /* avx512dq_broadcastv8df_mask_1 */
    case 5024:  /* avx512dq_broadcastv8di_mask_1 */
    case 5022:  /* avx512dq_broadcastv16si_mask_1 */
    case 5020:  /* avx512dq_broadcastv16sf_mask_1 */
    case 5018:  /* avx512vl_broadcastv8sf_mask_1 */
    case 5016:  /* avx512vl_broadcastv8si_mask_1 */
    case 4981:  /* avx512vl_vec_dup_gprv2df_mask */
    case 4979:  /* avx512vl_vec_dup_gprv4df_mask */
    case 4977:  /* avx512f_vec_dup_gprv8df_mask */
    case 4975:  /* avx512vl_vec_dup_gprv4sf_mask */
    case 4973:  /* avx512vl_vec_dup_gprv8sf_mask */
    case 4971:  /* avx512f_vec_dup_gprv16sf_mask */
    case 4969:  /* avx512vl_vec_dup_gprv2di_mask */
    case 4967:  /* avx512vl_vec_dup_gprv4di_mask */
    case 4965:  /* avx512f_vec_dup_gprv8di_mask */
    case 4963:  /* avx512vl_vec_dup_gprv4si_mask */
    case 4961:  /* avx512vl_vec_dup_gprv8si_mask */
    case 4959:  /* avx512f_vec_dup_gprv16si_mask */
    case 4957:  /* avx512vl_vec_dup_gprv8hi_mask */
    case 4955:  /* avx512vl_vec_dup_gprv16hi_mask */
    case 4953:  /* avx512bw_vec_dup_gprv32hi_mask */
    case 4951:  /* avx512vl_vec_dup_gprv32qi_mask */
    case 4949:  /* avx512vl_vec_dup_gprv16qi_mask */
    case 4947:  /* avx512bw_vec_dup_gprv64qi_mask */
    case 4945:  /* avx512f_broadcastv8di_mask */
    case 4943:  /* avx512f_broadcastv8df_mask */
    case 4941:  /* avx512f_broadcastv16si_mask */
    case 4939:  /* avx512f_broadcastv16sf_mask */
    case 4642:  /* *sse4_1_zero_extendv2siv2di2_mask_1 */
    case 4640:  /* *sse4_1_sign_extendv2siv2di2_mask_1 */
    case 4634:  /* avx2_zero_extendv4siv4di2_mask */
    case 4632:  /* avx2_sign_extendv4siv4di2_mask */
    case 4630:  /* avx512f_zero_extendv8siv8di2_mask */
    case 4628:  /* avx512f_sign_extendv8siv8di2_mask */
    case 4622:  /* *sse4_1_zero_extendv2hiv2di2_mask_1 */
    case 4620:  /* *sse4_1_sign_extendv2hiv2di2_mask_1 */
    case 4610:  /* *avx2_zero_extendv4hiv4di2_mask_1 */
    case 4608:  /* *avx2_sign_extendv4hiv4di2_mask_1 */
    case 4602:  /* avx512f_zero_extendv8hiv8di2_mask */
    case 4600:  /* avx512f_sign_extendv8hiv8di2_mask */
    case 4590:  /* *avx2_zero_extendv4qiv4di2_mask_1 */
    case 4588:  /* *avx2_sign_extendv4qiv4di2_mask_1 */
    case 4578:  /* *avx512f_zero_extendv8qiv8di2_mask_1 */
    case 4576:  /* *avx512f_sign_extendv8qiv8di2_mask_1 */
    case 4566:  /* *sse4_1_zero_extendv4hiv4si2_mask_1 */
    case 4564:  /* *sse4_1_sign_extendv4hiv4si2_mask_1 */
    case 4558:  /* avx2_zero_extendv8hiv8si2_mask */
    case 4556:  /* avx2_sign_extendv8hiv8si2_mask */
    case 4554:  /* avx512f_zero_extendv16hiv16si2_mask */
    case 4552:  /* avx512f_sign_extendv16hiv16si2_mask */
    case 4546:  /* *sse4_1_zero_extendv4qiv4si2_mask_1 */
    case 4544:  /* *sse4_1_sign_extendv4qiv4si2_mask_1 */
    case 4534:  /* *avx2_zero_extendv8qiv8si2_mask_1 */
    case 4532:  /* *avx2_sign_extendv8qiv8si2_mask_1 */
    case 4526:  /* avx512f_zero_extendv16qiv16si2_mask */
    case 4524:  /* avx512f_sign_extendv16qiv16si2_mask */
    case 4518:  /* *sse4_1_zero_extendv8qiv8hi2_mask_1 */
    case 4516:  /* *sse4_1_sign_extendv8qiv8hi2_mask_1 */
    case 4510:  /* avx512bw_zero_extendv32qiv32hi2_mask */
    case 4508:  /* avx512bw_sign_extendv32qiv32hi2_mask */
    case 4506:  /* avx2_zero_extendv16qiv16hi2_mask */
    case 4504:  /* avx2_sign_extendv16qiv16hi2_mask */
    case 4449:  /* absv8hi2_mask */
    case 4448:  /* absv16hi2_mask */
    case 4447:  /* absv32hi2_mask */
    case 4446:  /* absv32qi2_mask */
    case 4445:  /* absv16qi2_mask */
    case 4444:  /* absv64qi2_mask */
    case 4443:  /* absv2di2_mask */
    case 4442:  /* absv4di2_mask */
    case 4441:  /* absv8di2_mask */
    case 4440:  /* absv4si2_mask */
    case 4439:  /* absv8si2_mask */
    case 4438:  /* absv16si2_mask */
    case 3195:  /* avx512vl_us_truncatev16hiv16qi2_mask */
    case 3194:  /* avx512vl_truncatev16hiv16qi2_mask */
    case 3193:  /* avx512vl_ss_truncatev16hiv16qi2_mask */
    case 3192:  /* avx512vl_us_truncatev8siv8hi2_mask */
    case 3191:  /* avx512vl_truncatev8siv8hi2_mask */
    case 3190:  /* avx512vl_ss_truncatev8siv8hi2_mask */
    case 3189:  /* avx512vl_us_truncatev4div4si2_mask */
    case 3188:  /* avx512vl_truncatev4div4si2_mask */
    case 3187:  /* avx512vl_ss_truncatev4div4si2_mask */
    case 3177:  /* avx512bw_us_truncatev32hiv32qi2_mask */
    case 3176:  /* avx512bw_truncatev32hiv32qi2_mask */
    case 3175:  /* avx512bw_ss_truncatev32hiv32qi2_mask */
    case 3171:  /* avx512f_us_truncatev8div8hi2_mask */
    case 3170:  /* avx512f_truncatev8div8hi2_mask */
    case 3169:  /* avx512f_ss_truncatev8div8hi2_mask */
    case 3168:  /* avx512f_us_truncatev8div8si2_mask */
    case 3167:  /* avx512f_truncatev8div8si2_mask */
    case 3166:  /* avx512f_ss_truncatev8div8si2_mask */
    case 3165:  /* avx512f_us_truncatev16siv16hi2_mask */
    case 3164:  /* avx512f_truncatev16siv16hi2_mask */
    case 3163:  /* avx512f_ss_truncatev16siv16hi2_mask */
    case 3162:  /* avx512f_us_truncatev16siv16qi2_mask */
    case 3161:  /* avx512f_truncatev16siv16qi2_mask */
    case 3160:  /* avx512f_ss_truncatev16siv16qi2_mask */
    case 3144:  /* vec_dupv2df_mask */
    case 2914:  /* vec_extract_hi_v8sf_mask */
    case 2913:  /* vec_extract_hi_v8si_mask */
    case 2912:  /* vec_extract_hi_v8sf_maskm */
    case 2911:  /* vec_extract_hi_v8si_maskm */
    case 2910:  /* vec_extract_lo_v8sf_maskm */
    case 2909:  /* vec_extract_lo_v8si_maskm */
    case 2908:  /* vec_extract_lo_v8sf_mask */
    case 2906:  /* vec_extract_lo_v8si_mask */
    case 2904:  /* vec_extract_hi_v4df_mask */
    case 2902:  /* vec_extract_hi_v4di_mask */
    case 2900:  /* vec_extract_lo_v4df_mask */
    case 2898:  /* vec_extract_lo_v4di_mask */
    case 2896:  /* vec_extract_lo_v16si_mask */
    case 2894:  /* vec_extract_lo_v16sf_mask */
    case 2892:  /* vec_extract_hi_v16si_mask */
    case 2890:  /* vec_extract_hi_v16sf_mask */
    case 2888:  /* vec_extract_hi_v16si_maskm */
    case 2887:  /* vec_extract_hi_v16sf_maskm */
    case 2886:  /* vec_extract_hi_v8di_mask */
    case 2884:  /* vec_extract_hi_v8df_mask */
    case 2882:  /* vec_extract_hi_v8di_maskm */
    case 2881:  /* vec_extract_hi_v8df_maskm */
    case 2880:  /* vec_extract_lo_v8di_mask */
    case 2878:  /* vec_extract_lo_v8df_mask */
    case 2876:  /* vec_extract_lo_v8di_maskm */
    case 2875:  /* vec_extract_lo_v8df_maskm */
    case 2777:  /* avx_cvtps2pd256_mask */
    case 2774:  /* avx512f_cvtps2pd512_mask */
    case 2768:  /* avx_cvtpd2ps256_mask */
    case 2765:  /* avx512f_cvtpd2ps512_mask */
    case 2753:  /* ufix_truncv4sfv4si2_mask */
    case 2751:  /* ufix_truncv8sfv8si2_mask */
    case 2745:  /* fixuns_truncv4sfv4di2_mask */
    case 2743:  /* fix_truncv4sfv4di2_mask */
    case 2740:  /* fixuns_truncv8sfv8di2_mask */
    case 2736:  /* fix_truncv8sfv8di2_mask */
    case 2717:  /* fixuns_truncv2dfv2di2_mask */
    case 2715:  /* fix_truncv2dfv2di2_mask */
    case 2713:  /* fixuns_truncv4dfv4di2_mask */
    case 2711:  /* fix_truncv4dfv4di2_mask */
    case 2708:  /* fixuns_truncv8dfv8di2_mask */
    case 2704:  /* fix_truncv8dfv8di2_mask */
    case 2701:  /* ufix_truncv4dfv4si2_mask */
    case 2699:  /* fix_truncv4dfv4si2_mask */
    case 2693:  /* fixuns_truncv8dfv8si2_mask */
    case 2689:  /* fix_truncv8dfv8si2_mask */
    case 2659:  /* ufloatv4siv4df2_mask */
    case 2657:  /* ufloatv8siv8df2_mask */
    case 2649:  /* floatunsv4div4sf2_mask */
    case 2647:  /* floatv4div4sf2_mask */
    case 2644:  /* floatunsv8div8sf2_mask */
    case 2640:  /* floatv8div8sf2_mask */
    case 2636:  /* floatunsv2div2df2_mask */
    case 2632:  /* floatv2div2df2_mask */
    case 2628:  /* floatunsv4div4df2_mask */
    case 2624:  /* floatv4div4df2_mask */
    case 2620:  /* floatunsv8div8df2_mask */
    case 2616:  /* floatv8div8df2_mask */
    case 2613:  /* floatv4siv4df2_mask */
    case 2611:  /* floatv8siv8df2_mask */
    case 2577:  /* fix_truncv4sfv4si2_mask */
    case 2575:  /* fix_truncv8sfv8si2_mask */
    case 2572:  /* ufix_truncv16sfv16si2_mask */
    case 2568:  /* fix_truncv16sfv16si2_mask */
    case 2528:  /* ufloatv4siv4sf2_mask */
    case 2524:  /* ufloatv8siv8sf2_mask */
    case 2520:  /* ufloatv16siv16sf2_mask */
    case 2517:  /* floatv4siv4sf2_mask */
    case 2515:  /* floatv8siv8sf2_mask */
    case 2512:  /* floatv16siv16sf2_mask */
    case 2174:  /* *fma_fnmadd_v2df */
    case 2172:  /* *fma_fnmadd_v4df */
    case 2168:  /* *fma_fnmadd_v8df */
    case 2167:  /* *fma_fnmadd_df */
    case 2165:  /* *fma_fnmadd_v4sf */
    case 2163:  /* *fma_fnmadd_v8sf */
    case 2159:  /* *fma_fnmadd_v16sf */
    case 2158:  /* *fma_fnmadd_sf */
    case 2157:  /* *fma_fnmadd_v4df */
    case 2156:  /* *fma_fnmadd_v8sf */
    case 2155:  /* *fma_fnmadd_v2df */
    case 2154:  /* *fma_fnmadd_v4sf */
    case 2153:  /* *fma_fnmadd_df */
    case 2152:  /* *fma_fnmadd_sf */
    case 2038:  /* **fma_fmadd_v8df_bcst_2 */
    case 2036:  /* **fma_fmadd_v16sf_bcst_2 */
    case 2034:  /* **fma_fmadd_v4df_bcst_2 */
    case 2032:  /* **fma_fmadd_v8sf_bcst_2 */
    case 2030:  /* **fma_fmadd_v2df_bcst_2 */
    case 2028:  /* **fma_fmadd_v4sf_bcst_2 */
    case 1681:  /* sse2_sqrtv2df2_mask */
    case 1679:  /* avx_sqrtv4df2_mask */
    case 1676:  /* avx512f_sqrtv8df2_mask */
    case 1673:  /* sse_sqrtv4sf2_mask */
    case 1671:  /* avx_sqrtv8sf2_mask */
    case 1668:  /* avx512f_sqrtv16sf2_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 2773:  /* avx512f_cvtps2pd512_round */
    case 2764:  /* *avx512f_cvtpd2ps512_round */
    case 2739:  /* fixuns_truncv8sfv8di2_round */
    case 2735:  /* fix_truncv8sfv8di2_round */
    case 2707:  /* fixuns_truncv8dfv8di2_round */
    case 2703:  /* fix_truncv8dfv8di2_round */
    case 2692:  /* fixuns_truncv8dfv8si2_round */
    case 2688:  /* fix_truncv8dfv8si2_round */
    case 2643:  /* floatunsv8div8sf2_round */
    case 2639:  /* floatv8div8sf2_round */
    case 2635:  /* floatunsv2div2df2_round */
    case 2631:  /* floatv2div2df2_round */
    case 2627:  /* floatunsv4div4df2_round */
    case 2623:  /* floatv4div4df2_round */
    case 2619:  /* floatunsv8div8df2_round */
    case 2615:  /* floatv8div8df2_round */
    case 2571:  /* ufix_truncv16sfv16si2_round */
    case 2567:  /* fix_truncv16sfv16si2_round */
    case 2527:  /* ufloatv4siv4sf2_round */
    case 2523:  /* ufloatv8siv8sf2_round */
    case 2519:  /* ufloatv16siv16sf2_round */
    case 2511:  /* floatv16siv16sf2_round */
    case 1675:  /* avx512f_sqrtv8df2_round */
    case 1667:  /* avx512f_sqrtv16sf2_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 1715:  /* rsqrt14_v2df_mask */
    case 1714:  /* rsqrt14_v4sf_mask */
    case 1665:  /* srcp14v2df_mask */
    case 1664:  /* srcp14v4sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 5900:  /* avx512f_cvtneps2bf16_v4sf_mask */
    case 5898:  /* avx512f_cvtneps2bf16_v8sf_mask */
    case 5896:  /* avx512f_cvtneps2bf16_v16sf_mask */
    case 5626:  /* conflictv2di_mask */
    case 5624:  /* conflictv4di_mask */
    case 5622:  /* conflictv8di_mask */
    case 5620:  /* conflictv4si_mask */
    case 5618:  /* conflictv8si_mask */
    case 5616:  /* conflictv16si_mask */
    case 5246:  /* avx512f_vcvtph2ps512_mask */
    case 5243:  /* vcvtph2ps256_mask */
    case 5241:  /* *vcvtph2ps_load_mask */
    case 4722:  /* avx512er_rsqrt28v8df_mask */
    case 4718:  /* avx512er_rsqrt28v16sf_mask */
    case 4710:  /* avx512er_rcp28v8df_mask */
    case 4706:  /* avx512er_rcp28v16sf_mask */
    case 4702:  /* avx512er_exp2v8df_mask */
    case 4698:  /* avx512er_exp2v16sf_mask */
    case 3009:  /* avx512vl_getexpv2df_mask */
    case 3005:  /* avx512vl_getexpv4df_mask */
    case 3001:  /* avx512f_getexpv8df_mask */
    case 2997:  /* avx512vl_getexpv4sf_mask */
    case 2993:  /* avx512vl_getexpv8sf_mask */
    case 2989:  /* avx512f_getexpv16sf_mask */
    case 2733:  /* ufix_notruncv2dfv2di2_mask */
    case 2731:  /* ufix_notruncv4dfv4di2_mask */
    case 2728:  /* ufix_notruncv8dfv8di2_mask */
    case 2725:  /* fix_notruncv2dfv2di2_mask */
    case 2723:  /* fix_notruncv4dfv4di2_mask */
    case 2720:  /* fix_notruncv8dfv8di2_mask */
    case 2682:  /* ufix_notruncv4dfv4si2_mask */
    case 2678:  /* ufix_notruncv8dfv8si2_mask */
    case 2671:  /* avx_cvtpd2dq256_mask */
    case 2668:  /* avx512f_cvtpd2dq512_mask */
    case 2563:  /* avx512dq_cvtps2uqqv4di_mask */
    case 2560:  /* avx512dq_cvtps2uqqv8di_mask */
    case 2555:  /* avx512dq_cvtps2qqv4di_mask */
    case 2552:  /* avx512dq_cvtps2qqv8di_mask */
    case 2548:  /* avx512vl_ufix_notruncv4sfv4si_mask */
    case 2544:  /* avx512vl_ufix_notruncv8sfv8si_mask */
    case 2540:  /* avx512f_ufix_notruncv16sfv16si_mask */
    case 2536:  /* avx512f_fix_notruncv16sfv16si_mask */
    case 2533:  /* sse2_fix_notruncv4sfv4si_mask */
    case 2531:  /* avx_fix_notruncv8sfv8si_mask */
    case 1711:  /* rsqrt14v2df_mask */
    case 1709:  /* rsqrt14v4df_mask */
    case 1707:  /* rsqrt14v8df_mask */
    case 1705:  /* rsqrt14v4sf_mask */
    case 1703:  /* rsqrt14v8sf_mask */
    case 1701:  /* rsqrt14v16sf_mask */
    case 1661:  /* rcp14v2df_mask */
    case 1659:  /* rcp14v4df_mask */
    case 1657:  /* rcp14v8df_mask */
    case 1655:  /* rcp14v4sf_mask */
    case 1653:  /* rcp14v8sf_mask */
    case 1651:  /* rcp14v16sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 1717:  /* *sse_vmrsqrtv4sf2 */
    case 1649:  /* *sse_vmrcpv4sf2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 4798:  /* *xop_vmfrczv2df2 */
    case 4797:  /* *xop_vmfrczv4sf2 */
    case 4726:  /* avx512er_vmrsqrt28v2df */
    case 4724:  /* avx512er_vmrsqrt28v4sf */
    case 4714:  /* avx512er_vmrcp28v2df */
    case 4712:  /* avx512er_vmrcp28v4sf */
    case 2672:  /* *avx_cvtpd2dq256_2 */
    case 1716:  /* sse_vmrsqrtv4sf2 */
    case 1713:  /* rsqrt14v2df */
    case 1712:  /* rsqrt14v4sf */
    case 1663:  /* srcp14v2df */
    case 1662:  /* srcp14v4sf */
    case 1648:  /* sse_vmrcpv4sf2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 1801:  /* sse2_vmsminv2df3_mask_round */
    case 1797:  /* sse2_vmsmaxv2df3_mask_round */
    case 1793:  /* sse_vmsminv4sf3_mask_round */
    case 1789:  /* sse_vmsmaxv4sf3_mask_round */
    case 1617:  /* sse2_vmdivv2df3_mask_round */
    case 1613:  /* sse2_vmmulv2df3_mask_round */
    case 1609:  /* sse_vmdivv4sf3_mask_round */
    case 1605:  /* sse_vmmulv4sf3_mask_round */
    case 1569:  /* sse2_vmsubv2df3_mask_round */
    case 1565:  /* sse2_vmaddv2df3_mask_round */
    case 1561:  /* sse_vmsubv4sf3_mask_round */
    case 1557:  /* sse_vmaddv4sf3_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1799:  /* sse2_vmsminv2df3_mask */
    case 1795:  /* sse2_vmsmaxv2df3_mask */
    case 1791:  /* sse_vmsminv4sf3_mask */
    case 1787:  /* sse_vmsmaxv4sf3_mask */
    case 1616:  /* sse2_vmdivv2df3_mask */
    case 1612:  /* sse2_vmmulv2df3_mask */
    case 1608:  /* sse_vmdivv4sf3_mask */
    case 1604:  /* sse_vmmulv4sf3_mask */
    case 1568:  /* sse2_vmsubv2df3_mask */
    case 1564:  /* sse2_vmaddv2df3_mask */
    case 1560:  /* sse_vmsubv4sf3_mask */
    case 1556:  /* sse_vmaddv4sf3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1800:  /* sse2_vmsminv2df3_round */
    case 1796:  /* sse2_vmsmaxv2df3_round */
    case 1792:  /* sse_vmsminv4sf3_round */
    case 1788:  /* sse_vmsmaxv4sf3_round */
    case 1615:  /* sse2_vmdivv2df3_round */
    case 1611:  /* sse2_vmmulv2df3_round */
    case 1607:  /* sse_vmdivv4sf3_round */
    case 1603:  /* sse_vmmulv4sf3_round */
    case 1567:  /* sse2_vmsubv2df3_round */
    case 1563:  /* sse2_vmaddv2df3_round */
    case 1559:  /* sse_vmsubv4sf3_round */
    case 1555:  /* sse_vmaddv4sf3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1798:  /* sse2_vmsminv2df3 */
    case 1794:  /* sse2_vmsmaxv2df3 */
    case 1790:  /* sse_vmsminv4sf3 */
    case 1786:  /* sse_vmsmaxv4sf3 */
    case 1614:  /* sse2_vmdivv2df3 */
    case 1610:  /* sse2_vmmulv2df3 */
    case 1606:  /* sse_vmdivv4sf3 */
    case 1602:  /* sse_vmmulv4sf3 */
    case 1566:  /* sse2_vmsubv2df3 */
    case 1562:  /* sse2_vmaddv2df3 */
    case 1558:  /* sse_vmsubv4sf3 */
    case 1554:  /* sse_vmaddv4sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1601:  /* *sse2_vmdivv2df3 */
    case 1600:  /* *sse2_vmmulv2df3 */
    case 1599:  /* *sse_vmdivv4sf3 */
    case 1598:  /* *sse_vmmulv4sf3 */
    case 1553:  /* *sse2_vmsubv2df3 */
    case 1552:  /* *sse2_vmaddv2df3 */
    case 1551:  /* *sse_vmsubv4sf3 */
    case 1550:  /* *sse_vmaddv4sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 5148:  /* vec_set_hi_v8sf_mask */
    case 5146:  /* vec_set_hi_v8si_mask */
    case 5140:  /* vec_set_hi_v4df_mask */
    case 5138:  /* vec_set_hi_v4di_mask */
    case 4233:  /* vec_set_hi_v8di_mask */
    case 4231:  /* vec_set_hi_v8df_mask */
    case 4225:  /* vec_set_hi_v16si_mask */
    case 4223:  /* vec_set_hi_v16sf_mask */
    case 3955:  /* *xorv2di3_bcst */
    case 3953:  /* *iorv2di3_bcst */
    case 3951:  /* *andv2di3_bcst */
    case 3949:  /* *xorv4di3_bcst */
    case 3947:  /* *iorv4di3_bcst */
    case 3945:  /* *andv4di3_bcst */
    case 3943:  /* *xorv8di3_bcst */
    case 3941:  /* *iorv8di3_bcst */
    case 3939:  /* *andv8di3_bcst */
    case 3937:  /* *xorv4si3_bcst */
    case 3935:  /* *iorv4si3_bcst */
    case 3933:  /* *andv4si3_bcst */
    case 3931:  /* *xorv8si3_bcst */
    case 3929:  /* *iorv8si3_bcst */
    case 3927:  /* *andv8si3_bcst */
    case 3925:  /* *xorv16si3_bcst */
    case 3923:  /* *iorv16si3_bcst */
    case 3921:  /* *andv16si3_bcst */
    case 3865:  /* *andnotv2di3_mask */
    case 3864:  /* *andnotv4di3_mask */
    case 3863:  /* *andnotv8di3_mask */
    case 3862:  /* *andnotv4si3_mask */
    case 3861:  /* *andnotv8si3_mask */
    case 3860:  /* *andnotv16si3_mask */
    case 1943:  /* avx512f_andnotv8df3_mask */
    case 1941:  /* avx512f_andnotv16sf3_mask */
    case 1939:  /* sse2_andnotv2df3_mask */
    case 1937:  /* avx_andnotv4df3_mask */
    case 1935:  /* sse_andnotv4sf3_mask */
    case 1933:  /* avx_andnotv8sf3_mask */
    case 1597:  /* *mulv8df3_mask_bcst */
    case 1595:  /* *mulv16sf3_mask_bcst */
    case 1593:  /* *mulv4df3_mask_bcst */
    case 1591:  /* *mulv8sf3_mask_bcst */
    case 1589:  /* *mulv2df3_mask_bcst */
    case 1587:  /* *mulv4sf3_mask_bcst */
    case 1549:  /* *addv8df3_mask_bcst */
    case 1547:  /* *addv16sf3_mask_bcst */
    case 1545:  /* *addv4df3_mask_bcst */
    case 1543:  /* *addv8sf3_mask_bcst */
    case 1541:  /* *addv2df3_mask_bcst */
    case 1539:  /* *addv4sf3_mask_bcst */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 1645:  /* *avx512f_divv8df3_mask_bcst */
    case 1643:  /* *avx512f_divv16sf3_mask_bcst */
    case 1641:  /* *avx512vl_divv4df3_mask_bcst */
    case 1639:  /* *avx512vl_divv8sf3_mask_bcst */
    case 1637:  /* *avx512vl_divv2df3_mask_bcst */
    case 1635:  /* *avx512vl_divv4sf3_mask_bcst */
    case 1537:  /* *subv8df3_mask_bcst */
    case 1535:  /* *subv16sf3_mask_bcst */
    case 1533:  /* *subv4df3_mask_bcst */
    case 1531:  /* *subv8sf3_mask_bcst */
    case 1529:  /* *subv2df3_mask_bcst */
    case 1527:  /* *subv4sf3_mask_bcst */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3375:  /* *subv2di3_bcst */
    case 3374:  /* *subv4di3_bcst */
    case 3373:  /* *subv8di3_bcst */
    case 3372:  /* *subv4si3_bcst */
    case 3371:  /* *subv8si3_bcst */
    case 3370:  /* *subv16si3_bcst */
    case 1644:  /* *avx512f_divv8df3_bcst */
    case 1642:  /* *avx512f_divv16sf3_bcst */
    case 1640:  /* *avx512vl_divv4df3_bcst */
    case 1638:  /* *avx512vl_divv8sf3_bcst */
    case 1636:  /* *avx512vl_divv2df3_bcst */
    case 1634:  /* *avx512vl_divv4sf3_bcst */
    case 1536:  /* *subv8df3_bcst */
    case 1534:  /* *subv16sf3_bcst */
    case 1532:  /* *subv4df3_bcst */
    case 1530:  /* *subv8sf3_bcst */
    case 1528:  /* *subv2df3_bcst */
    case 1526:  /* *subv4sf3_bcst */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 1741:  /* *sminv8df3_mask_round */
    case 1737:  /* *smaxv8df3_mask_round */
    case 1725:  /* *sminv16sf3_mask_round */
    case 1721:  /* *smaxv16sf3_mask_round */
    case 1629:  /* avx512f_divv8df3_mask_round */
    case 1621:  /* avx512f_divv16sf3_mask_round */
    case 1581:  /* *mulv8df3_mask_round */
    case 1573:  /* *mulv16sf3_mask_round */
    case 1525:  /* *subv2df3_mask_round */
    case 1521:  /* *addv2df3_mask_round */
    case 1517:  /* *subv4df3_mask_round */
    case 1513:  /* *addv4df3_mask_round */
    case 1509:  /* *subv8df3_mask_round */
    case 1505:  /* *addv8df3_mask_round */
    case 1501:  /* *subv4sf3_mask_round */
    case 1497:  /* *addv4sf3_mask_round */
    case 1493:  /* *subv8sf3_mask_round */
    case 1489:  /* *addv8sf3_mask_round */
    case 1485:  /* *subv16sf3_mask_round */
    case 1481:  /* *addv16sf3_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 5225:  /* avx512bw_lshrvv32hi_mask */
    case 5223:  /* avx512bw_ashlvv32hi_mask */
    case 5221:  /* avx512vl_lshrvv16hi_mask */
    case 5219:  /* avx512vl_ashlvv16hi_mask */
    case 5217:  /* avx512vl_lshrvv8hi_mask */
    case 5215:  /* avx512vl_ashlvv8hi_mask */
    case 5213:  /* avx2_lshrvv2di_mask */
    case 5211:  /* avx2_ashlvv2di_mask */
    case 5209:  /* avx2_lshrvv4di_mask */
    case 5207:  /* avx2_ashlvv4di_mask */
    case 5205:  /* avx512f_lshrvv8di_mask */
    case 5203:  /* avx512f_ashlvv8di_mask */
    case 5201:  /* avx2_lshrvv4si_mask */
    case 5199:  /* avx2_ashlvv4si_mask */
    case 5197:  /* avx2_lshrvv8si_mask */
    case 5195:  /* avx2_ashlvv8si_mask */
    case 5193:  /* avx512f_lshrvv16si_mask */
    case 5191:  /* avx512f_ashlvv16si_mask */
    case 5189:  /* avx512bw_ashrvv32hi_mask */
    case 5187:  /* avx512vl_ashrvv16hi_mask */
    case 5185:  /* avx512vl_ashrvv8hi_mask */
    case 5183:  /* avx512f_ashrvv8di_mask */
    case 5181:  /* avx2_ashrvv4di_mask */
    case 5179:  /* avx2_ashrvv2di_mask */
    case 5177:  /* avx512f_ashrvv16si_mask */
    case 5175:  /* avx2_ashrvv8si_mask */
    case 5173:  /* avx2_ashrvv4si_mask */
    case 3901:  /* xorv2di3_mask */
    case 3899:  /* iorv2di3_mask */
    case 3897:  /* andv2di3_mask */
    case 3895:  /* xorv4di3_mask */
    case 3893:  /* iorv4di3_mask */
    case 3891:  /* andv4di3_mask */
    case 3889:  /* xorv8di3_mask */
    case 3887:  /* iorv8di3_mask */
    case 3885:  /* andv8di3_mask */
    case 3883:  /* xorv4si3_mask */
    case 3881:  /* iorv4si3_mask */
    case 3879:  /* andv4si3_mask */
    case 3877:  /* xorv8si3_mask */
    case 3875:  /* iorv8si3_mask */
    case 3873:  /* andv8si3_mask */
    case 3871:  /* xorv16si3_mask */
    case 3869:  /* iorv16si3_mask */
    case 3867:  /* andv16si3_mask */
    case 3841:  /* one_cmplv2di2_mask */
    case 3839:  /* one_cmplv4di2_mask */
    case 3837:  /* one_cmplv4si2_mask */
    case 3835:  /* one_cmplv8si2_mask */
    case 3827:  /* one_cmplv8di2_mask */
    case 3825:  /* one_cmplv16si2_mask */
    case 3757:  /* *sse4_1_uminv4si3_mask */
    case 3755:  /* *sse4_1_umaxv4si3_mask */
    case 3753:  /* *sse4_1_uminv8hi3_mask */
    case 3751:  /* *sse4_1_umaxv8hi3_mask */
    case 3747:  /* *sse4_1_sminv4si3_mask */
    case 3745:  /* *sse4_1_smaxv4si3_mask */
    case 3743:  /* *sse4_1_sminv16qi3_mask */
    case 3741:  /* *sse4_1_smaxv16qi3_mask */
    case 3739:  /* uminv8hi3_mask */
    case 3737:  /* umaxv8hi3_mask */
    case 3735:  /* sminv8hi3_mask */
    case 3733:  /* smaxv8hi3_mask */
    case 3731:  /* uminv16hi3_mask */
    case 3729:  /* umaxv16hi3_mask */
    case 3727:  /* sminv16hi3_mask */
    case 3725:  /* smaxv16hi3_mask */
    case 3723:  /* uminv32hi3_mask */
    case 3721:  /* umaxv32hi3_mask */
    case 3719:  /* sminv32hi3_mask */
    case 3717:  /* smaxv32hi3_mask */
    case 3715:  /* uminv32qi3_mask */
    case 3713:  /* umaxv32qi3_mask */
    case 3711:  /* sminv32qi3_mask */
    case 3709:  /* smaxv32qi3_mask */
    case 3707:  /* uminv16qi3_mask */
    case 3705:  /* umaxv16qi3_mask */
    case 3703:  /* sminv16qi3_mask */
    case 3701:  /* smaxv16qi3_mask */
    case 3699:  /* uminv64qi3_mask */
    case 3697:  /* umaxv64qi3_mask */
    case 3695:  /* sminv64qi3_mask */
    case 3693:  /* smaxv64qi3_mask */
    case 3691:  /* *avx512f_uminv2di3_mask */
    case 3689:  /* *avx512f_umaxv2di3_mask */
    case 3687:  /* *avx512f_sminv2di3_mask */
    case 3685:  /* *avx512f_smaxv2di3_mask */
    case 3683:  /* *avx512f_uminv4di3_mask */
    case 3681:  /* *avx512f_umaxv4di3_mask */
    case 3679:  /* *avx512f_sminv4di3_mask */
    case 3677:  /* *avx512f_smaxv4di3_mask */
    case 3675:  /* *avx512f_uminv8di3_mask */
    case 3673:  /* *avx512f_umaxv8di3_mask */
    case 3671:  /* *avx512f_sminv8di3_mask */
    case 3669:  /* *avx512f_smaxv8di3_mask */
    case 3667:  /* *avx512f_uminv4si3_mask */
    case 3665:  /* *avx512f_umaxv4si3_mask */
    case 3663:  /* *avx512f_sminv4si3_mask */
    case 3661:  /* *avx512f_smaxv4si3_mask */
    case 3659:  /* *avx512f_uminv8si3_mask */
    case 3657:  /* *avx512f_umaxv8si3_mask */
    case 3655:  /* *avx512f_sminv8si3_mask */
    case 3653:  /* *avx512f_smaxv8si3_mask */
    case 3651:  /* *avx512f_uminv16si3_mask */
    case 3649:  /* *avx512f_umaxv16si3_mask */
    case 3647:  /* *avx512f_sminv16si3_mask */
    case 3645:  /* *avx512f_smaxv16si3_mask */
    case 3631:  /* avx512vl_rorv2di_mask */
    case 3629:  /* avx512vl_rolv2di_mask */
    case 3627:  /* avx512vl_rorv4di_mask */
    case 3625:  /* avx512vl_rolv4di_mask */
    case 3623:  /* avx512f_rorv8di_mask */
    case 3621:  /* avx512f_rolv8di_mask */
    case 3619:  /* avx512vl_rorv4si_mask */
    case 3617:  /* avx512vl_rolv4si_mask */
    case 3615:  /* avx512vl_rorv8si_mask */
    case 3613:  /* avx512vl_rolv8si_mask */
    case 3611:  /* avx512f_rorv16si_mask */
    case 3609:  /* avx512f_rolv16si_mask */
    case 3607:  /* avx512vl_rorvv2di_mask */
    case 3605:  /* avx512vl_rolvv2di_mask */
    case 3603:  /* avx512vl_rorvv4di_mask */
    case 3601:  /* avx512vl_rolvv4di_mask */
    case 3599:  /* avx512f_rorvv8di_mask */
    case 3597:  /* avx512f_rolvv8di_mask */
    case 3595:  /* avx512vl_rorvv4si_mask */
    case 3593:  /* avx512vl_rolvv4si_mask */
    case 3591:  /* avx512vl_rorvv8si_mask */
    case 3589:  /* avx512vl_rolvv8si_mask */
    case 3587:  /* avx512f_rorvv16si_mask */
    case 3585:  /* avx512f_rolvv16si_mask */
    case 3573:  /* lshrv8di3_mask */
    case 3571:  /* ashlv8di3_mask */
    case 3569:  /* lshrv16si3_mask */
    case 3567:  /* ashlv16si3_mask */
    case 3565:  /* lshrv32hi3_mask */
    case 3563:  /* ashlv32hi3_mask */
    case 3549:  /* lshrv2di3_mask */
    case 3547:  /* ashlv2di3_mask */
    case 3545:  /* lshrv4di3_mask */
    case 3543:  /* ashlv4di3_mask */
    case 3541:  /* lshrv4si3_mask */
    case 3539:  /* ashlv4si3_mask */
    case 3537:  /* lshrv8si3_mask */
    case 3535:  /* ashlv8si3_mask */
    case 3533:  /* lshrv8hi3_mask */
    case 3531:  /* ashlv8hi3_mask */
    case 3529:  /* lshrv16hi3_mask */
    case 3527:  /* ashlv16hi3_mask */
    case 3525:  /* ashrv8di3_mask */
    case 3523:  /* ashrv16si3_mask */
    case 3521:  /* ashrv4di3_mask */
    case 3519:  /* ashrv32hi3_mask */
    case 3513:  /* ashrv2di3_mask */
    case 3511:  /* ashrv4si3_mask */
    case 3509:  /* ashrv8si3_mask */
    case 3507:  /* ashrv8hi3_mask */
    case 3505:  /* ashrv16hi3_mask */
    case 3503:  /* *sse4_1_mulv4si3_mask */
    case 3501:  /* *avx2_mulv8si3_mask */
    case 3499:  /* *avx512f_mulv16si3_mask */
    case 3497:  /* avx512dq_mulv2di3_mask */
    case 3495:  /* avx512dq_mulv4di3_mask */
    case 3493:  /* avx512dq_mulv8di3_mask */
    case 3459:  /* *mulv8hi3_mask */
    case 3457:  /* *mulv16hi3_mask */
    case 3455:  /* *mulv32hi3_mask */
    case 3453:  /* *sse2_ussubv8hi3_mask */
    case 3451:  /* *sse2_sssubv8hi3_mask */
    case 3449:  /* *sse2_usaddv8hi3_mask */
    case 3447:  /* *sse2_ssaddv8hi3_mask */
    case 3445:  /* *avx2_ussubv16hi3_mask */
    case 3443:  /* *avx2_sssubv16hi3_mask */
    case 3441:  /* *avx2_usaddv16hi3_mask */
    case 3439:  /* *avx2_ssaddv16hi3_mask */
    case 3437:  /* *avx512bw_ussubv32hi3_mask */
    case 3435:  /* *avx512bw_sssubv32hi3_mask */
    case 3433:  /* *avx512bw_usaddv32hi3_mask */
    case 3431:  /* *avx512bw_ssaddv32hi3_mask */
    case 3429:  /* *sse2_ussubv16qi3_mask */
    case 3427:  /* *sse2_sssubv16qi3_mask */
    case 3425:  /* *sse2_usaddv16qi3_mask */
    case 3423:  /* *sse2_ssaddv16qi3_mask */
    case 3421:  /* *avx2_ussubv32qi3_mask */
    case 3419:  /* *avx2_sssubv32qi3_mask */
    case 3417:  /* *avx2_usaddv32qi3_mask */
    case 3415:  /* *avx2_ssaddv32qi3_mask */
    case 3413:  /* *avx512bw_ussubv64qi3_mask */
    case 3411:  /* *avx512bw_sssubv64qi3_mask */
    case 3409:  /* *avx512bw_usaddv64qi3_mask */
    case 3407:  /* *avx512bw_ssaddv64qi3_mask */
    case 3405:  /* *subv8hi3_mask */
    case 3404:  /* *addv8hi3_mask */
    case 3403:  /* *subv16hi3_mask */
    case 3402:  /* *addv16hi3_mask */
    case 3401:  /* *subv32hi3_mask */
    case 3400:  /* *addv32hi3_mask */
    case 3399:  /* *subv32qi3_mask */
    case 3398:  /* *addv32qi3_mask */
    case 3397:  /* *subv16qi3_mask */
    case 3396:  /* *addv16qi3_mask */
    case 3395:  /* *subv64qi3_mask */
    case 3394:  /* *addv64qi3_mask */
    case 3393:  /* *subv2di3_mask */
    case 3392:  /* *addv2di3_mask */
    case 3391:  /* *subv4di3_mask */
    case 3390:  /* *addv4di3_mask */
    case 3389:  /* *subv8di3_mask */
    case 3388:  /* *addv8di3_mask */
    case 3387:  /* *subv4si3_mask */
    case 3386:  /* *addv4si3_mask */
    case 3385:  /* *subv8si3_mask */
    case 3384:  /* *addv8si3_mask */
    case 3383:  /* *subv16si3_mask */
    case 3382:  /* *addv16si3_mask */
    case 1979:  /* *xorv8df3_mask */
    case 1977:  /* *iorv8df3_mask */
    case 1975:  /* *andv8df3_mask */
    case 1973:  /* *xorv16sf3_mask */
    case 1971:  /* *iorv16sf3_mask */
    case 1969:  /* *andv16sf3_mask */
    case 1967:  /* *xorv2df3_mask */
    case 1965:  /* *iorv2df3_mask */
    case 1963:  /* *andv2df3_mask */
    case 1961:  /* *xorv4df3_mask */
    case 1959:  /* *iorv4df3_mask */
    case 1957:  /* *andv4df3_mask */
    case 1955:  /* *xorv4sf3_mask */
    case 1953:  /* *iorv4sf3_mask */
    case 1951:  /* *andv4sf3_mask */
    case 1949:  /* *xorv8sf3_mask */
    case 1947:  /* *iorv8sf3_mask */
    case 1945:  /* *andv8sf3_mask */
    case 1749:  /* *sminv2df3_mask */
    case 1747:  /* *smaxv2df3_mask */
    case 1745:  /* *sminv4df3_mask */
    case 1743:  /* *smaxv4df3_mask */
    case 1740:  /* *sminv8df3_mask */
    case 1736:  /* *smaxv8df3_mask */
    case 1733:  /* *sminv4sf3_mask */
    case 1731:  /* *smaxv4sf3_mask */
    case 1729:  /* *sminv8sf3_mask */
    case 1727:  /* *smaxv8sf3_mask */
    case 1724:  /* *sminv16sf3_mask */
    case 1720:  /* *smaxv16sf3_mask */
    case 1633:  /* sse2_divv2df3_mask */
    case 1631:  /* avx_divv4df3_mask */
    case 1628:  /* avx512f_divv8df3_mask */
    case 1625:  /* sse_divv4sf3_mask */
    case 1623:  /* avx_divv8sf3_mask */
    case 1620:  /* avx512f_divv16sf3_mask */
    case 1585:  /* *mulv2df3_mask */
    case 1583:  /* *mulv4df3_mask */
    case 1580:  /* *mulv8df3_mask */
    case 1577:  /* *mulv4sf3_mask */
    case 1575:  /* *mulv8sf3_mask */
    case 1572:  /* *mulv16sf3_mask */
    case 1524:  /* *subv2df3_mask */
    case 1520:  /* *addv2df3_mask */
    case 1516:  /* *subv4df3_mask */
    case 1512:  /* *addv4df3_mask */
    case 1508:  /* *subv8df3_mask */
    case 1504:  /* *addv8df3_mask */
    case 1500:  /* *subv4sf3_mask */
    case 1496:  /* *addv4sf3_mask */
    case 1492:  /* *subv8sf3_mask */
    case 1488:  /* *addv8sf3_mask */
    case 1484:  /* *subv16sf3_mask */
    case 1480:  /* *addv16sf3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 1739:  /* *sminv8df3_round */
    case 1735:  /* *smaxv8df3_round */
    case 1723:  /* *sminv16sf3_round */
    case 1719:  /* *smaxv16sf3_round */
    case 1627:  /* avx512f_divv8df3_round */
    case 1619:  /* avx512f_divv16sf3_round */
    case 1579:  /* *mulv8df3_round */
    case 1571:  /* *mulv16sf3_round */
    case 1523:  /* *subv2df3_round */
    case 1519:  /* *addv2df3_round */
    case 1515:  /* *subv4df3_round */
    case 1511:  /* *addv4df3_round */
    case 1507:  /* *subv8df3_round */
    case 1503:  /* *addv8df3_round */
    case 1499:  /* *subv4sf3_round */
    case 1495:  /* *addv4sf3_round */
    case 1491:  /* *subv8sf3_round */
    case 1487:  /* *addv8sf3_round */
    case 1483:  /* *subv16sf3_round */
    case 1479:  /* *addv16sf3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 1459:  /* kunpckdi */
    case 1458:  /* kunpcksi */
    case 1457:  /* kunpckhi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 1397:  /* avx512vl_storev8hi_mask */
    case 1396:  /* avx512vl_storev16hi_mask */
    case 1395:  /* avx512bw_storev32hi_mask */
    case 1394:  /* avx512vl_storev32qi_mask */
    case 1393:  /* avx512vl_storev16qi_mask */
    case 1392:  /* avx512bw_storev64qi_mask */
    case 1391:  /* avx512vl_storev2df_mask */
    case 1390:  /* avx512vl_storev4df_mask */
    case 1389:  /* avx512f_storev8df_mask */
    case 1388:  /* avx512vl_storev4sf_mask */
    case 1387:  /* avx512vl_storev8sf_mask */
    case 1386:  /* avx512f_storev16sf_mask */
    case 1385:  /* avx512vl_storev2di_mask */
    case 1384:  /* avx512vl_storev4di_mask */
    case 1383:  /* avx512f_storev8di_mask */
    case 1382:  /* avx512vl_storev4si_mask */
    case 1381:  /* avx512vl_storev8si_mask */
    case 1380:  /* avx512f_storev16si_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 0;
      break;

    case 4501:  /* avx2_pblenddv4si */
    case 4500:  /* avx2_pblenddv8si */
    case 4499:  /* *avx2_pblendw */
    case 4498:  /* sse4_1_pblendw */
    case 4464:  /* sse4_1_blendpd */
    case 4463:  /* avx_blendpd256 */
    case 4462:  /* sse4_1_blendps */
    case 4461:  /* avx_blendps256 */
    case 1379:  /* avx512vl_blendmv8hi */
    case 1378:  /* avx512vl_blendmv16hi */
    case 1377:  /* avx512bw_blendmv32hi */
    case 1376:  /* avx512vl_blendmv32qi */
    case 1375:  /* avx512vl_blendmv16qi */
    case 1374:  /* avx512bw_blendmv64qi */
    case 1373:  /* avx512vl_blendmv2df */
    case 1372:  /* avx512vl_blendmv4df */
    case 1371:  /* avx512f_blendmv8df */
    case 1370:  /* avx512vl_blendmv4sf */
    case 1369:  /* avx512vl_blendmv8sf */
    case 1368:  /* avx512f_blendmv16sf */
    case 1367:  /* avx512vl_blendmv2di */
    case 1366:  /* avx512vl_blendmv4di */
    case 1365:  /* avx512f_blendmv8di */
    case 1364:  /* avx512vl_blendmv4si */
    case 1363:  /* avx512vl_blendmv8si */
    case 1362:  /* avx512f_blendmv16si */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 1361:  /* avx512f_storedf_mask */
    case 1360:  /* avx512f_storesf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 2);
      recog_data.dup_num[0] = 0;
      break;

    case 2483:  /* *fma4i_vmfnmadd_v2df */
    case 2482:  /* *fma4i_vmfnmadd_v4sf */
    case 1359:  /* *avx512f_loaddf_mask */
    case 1358:  /* *avx512f_loadsf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 1357:  /* avx512f_movdf_mask */
    case 1356:  /* avx512f_movsf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 4360:  /* *sse2_maskmovdqu */
    case 4359:  /* *sse2_maskmovdqu */
    case 1314:  /* *mmx_maskmovq */
    case 1313:  /* *mmx_maskmovq */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 4890:  /* avx2_permv4df_1 */
    case 4888:  /* avx2_permv4di_1 */
    case 4260:  /* sse2_pshuflw_1 */
    case 4254:  /* sse2_pshufd_1 */
    case 2873:  /* *avx512f_vextracti32x4_1 */
    case 2871:  /* *avx512f_vextractf32x4_1 */
    case 1298:  /* mmx_pshufw_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      break;

    case 4286:  /* *vec_extractv4si_zext_mem */
    case 4284:  /* *vec_extractv4si_zext */
    case 4275:  /* *vec_extractv16qi_zext */
    case 4274:  /* *vec_extractv8hi_zext */
    case 4273:  /* *vec_extractv8hi_zext */
    case 4272:  /* *vec_extractv16qi_zext */
    case 4271:  /* *vec_extractv16qi_zext */
    case 1308:  /* *vec_extractv2si_zext_mem */
    case 1297:  /* *mmx_pextrb_zext */
    case 1296:  /* *mmx_pextrb_zext */
    case 1295:  /* *mmx_pextrb_zext */
    case 1293:  /* *mmx_pextrw_zext */
    case 1292:  /* *mmx_pextrw_zext */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      break;

    case 4289:  /* *vec_extractv4ti */
    case 4288:  /* *vec_extractv2ti */
    case 4285:  /* *vec_extractv4si_mem */
    case 4283:  /* *vec_extractv4si */
    case 4277:  /* *vec_extractv8hi_mem */
    case 4276:  /* *vec_extractv16qi_mem */
    case 4270:  /* *vec_extractv8hi */
    case 4269:  /* *vec_extractv16qi */
    case 2862:  /* *vec_extractv4sf_mem */
    case 2861:  /* *sse4_1_extractps */
    case 1294:  /* *mmx_pextrb */
    case 1291:  /* *mmx_pextrw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      break;

    case 4205:  /* sse4_1_pinsrq */
    case 4204:  /* sse4_1_pinsrd */
    case 4203:  /* sse2_pinsrw */
    case 4202:  /* sse4_1_pinsrb */
    case 2853:  /* *vec_setv4sf_sse4_1 */
    case 1290:  /* *mmx_pinsrb */
    case 1289:  /* *mmx_pinsrw */
    case 1288:  /* *mmx_pinsrd */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4492:  /* sse4_1_packusdw */
    case 4490:  /* avx2_packusdw */
    case 4488:  /* avx512bw_packusdw */
    case 4164:  /* sse2_packuswb */
    case 4162:  /* avx2_packuswb */
    case 4160:  /* avx512bw_packuswb */
    case 4158:  /* sse2_packssdw */
    case 4156:  /* avx2_packssdw */
    case 4154:  /* avx512bw_packssdw */
    case 4152:  /* sse2_packsswb */
    case 4150:  /* avx2_packsswb */
    case 4148:  /* avx512bw_packsswb */
    case 3859:  /* *andnotv2di3_bcst */
    case 3858:  /* *andnotv4di3_bcst */
    case 3857:  /* *andnotv8di3_bcst */
    case 3856:  /* *andnotv4si3_bcst */
    case 3855:  /* *andnotv8si3_bcst */
    case 3854:  /* *andnotv16si3_bcst */
    case 1281:  /* mmx_packssdw */
    case 1280:  /* mmx_packuswb */
    case 1279:  /* mmx_packsswb */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 3482:  /* *sse4_1_mulv2siv2di3 */
    case 3480:  /* *vec_widen_smult_even_v8si */
    case 3478:  /* *vec_widen_smult_even_v16si */
    case 3476:  /* *vec_widen_umult_even_v4si */
    case 3474:  /* *vec_widen_umult_even_v8si */
    case 3472:  /* *vec_widen_umult_even_v16si */
    case 1248:  /* *sse2_umulv1siv1di3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      break;

    case 1310:  /* *mmx_uavgv4hi3 */
    case 1309:  /* *mmx_uavgv8qi3 */
    case 1247:  /* *mmx_pmulhrwv4hi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0));
      break;

    case 4395:  /* ssse3_pmaddubsw */
    case 4394:  /* ssse3_pmaddubsw128 */
    case 4385:  /* avx2_pmaddubsw256 */
    case 3491:  /* *sse2_pmaddwd */
    case 3490:  /* *avx2_pmaddwd */
    case 1246:  /* *mmx_pmaddwd */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 3470:  /* *umulv8hi3_highpart */
    case 3468:  /* *smulv8hi3_highpart */
    case 3466:  /* *umulv16hi3_highpart */
    case 3464:  /* *smulv16hi3_highpart */
    case 3462:  /* *umulv32hi3_highpart */
    case 3460:  /* *smulv32hi3_highpart */
    case 1245:  /* *mmx_umulv4hi3_highpart */
    case 1244:  /* *mmx_smulv4hi3_highpart */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0));
      break;

    case 1220:  /* mmx_pi2fw */
    case 1219:  /* mmx_pf2iw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      break;

    case 4384:  /* ssse3_phsubdv2si3 */
    case 4383:  /* ssse3_phadddv2si3 */
    case 1809:  /* sse3_hsubv2df3 */
    case 1214:  /* mmx_addsubv2sf3 */
    case 1213:  /* mmx_hsubv2sf3 */
    case 1212:  /* mmx_haddv2sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 4663:  /* ptesttf2 */
    case 4662:  /* avx_ptestv4df */
    case 4661:  /* avx_ptestv8sf */
    case 4660:  /* avx_ptestv4di */
    case 4659:  /* avx_ptestv8si */
    case 4658:  /* avx_ptestv16hi */
    case 4657:  /* avx_ptestv32qi */
    case 4656:  /* sse4_1_ptestv2df */
    case 4655:  /* sse4_1_ptestv4sf */
    case 4654:  /* sse4_1_ptestv2di */
    case 4653:  /* sse4_1_ptestv4si */
    case 4652:  /* sse4_1_ptestv8hi */
    case 4651:  /* sse4_1_ptestv16qi */
    case 4650:  /* avx_vtestpd */
    case 4649:  /* avx_vtestpd256 */
    case 4648:  /* avx_vtestps */
    case 4647:  /* avx_vtestps256 */
    case 1456:  /* kortestdi */
    case 1455:  /* kortestsi */
    case 1454:  /* kortesthi */
    case 1453:  /* kortestqi */
    case 1452:  /* ktestdi */
    case 1451:  /* ktestsi */
    case 1450:  /* ktesthi */
    case 1449:  /* ktestqi */
    case 1190:  /* tpause */
    case 1186:  /* umwait */
    case 1185:  /* enqcmds_di */
    case 1184:  /* enqcmd_di */
    case 1183:  /* enqcmds_si */
    case 1182:  /* enqcmd_si */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 1181:  /* movdir64b_di */
    case 1180:  /* movdir64b_si */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 1172:  /* *rdpkru */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      break;

    case 1161:  /* xbegin_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[0] = 0;
      break;

    case 1191:  /* tpause_rex64 */
    case 1187:  /* umwait_rex64 */
    case 1128:  /* *lwp_lwpinsdi3_1 */
    case 1127:  /* *lwp_lwpinssi3_1 */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 1118:  /* fldenv */
      ro[0] = *(ro_loc[0] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 0));
      break;

    case 4366:  /* sse3_monitor_di */
    case 4365:  /* sse3_monitor_si */
    case 1173:  /* *wrpkru */
    case 1169:  /* monitorx_di */
    case 1168:  /* monitorx_si */
    case 1167:  /* mwaitx */
    case 1126:  /* *lwp_lwpvaldi3_1 */
    case 1125:  /* *lwp_lwpvalsi3_1 */
    case 1114:  /* xsetbv_rex64 */
    case 1112:  /* xrstors64 */
    case 1111:  /* xrstor64 */
    case 1110:  /* xrstors_rex64 */
    case 1109:  /* xrstor_rex64 */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (pat, 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (pat, 0, 2));
      break;

    case 4364:  /* sse3_mwait */
    case 1156:  /* wrussdi */
    case 1155:  /* wrusssi */
    case 1154:  /* wrssdi */
    case 1153:  /* wrsssi */
    case 1113:  /* xsetbv */
    case 1108:  /* xrstors */
    case 1107:  /* xrstor */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (pat, 0, 1));
      break;

    case 1090:  /* rdtscp_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 1089:  /* rdtscp */
    case 1088:  /* rdtsc_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 1078:  /* *stack_protect_set_3 */
    case 1077:  /* *stack_protect_set_2_di */
    case 1076:  /* *stack_protect_set_2_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      break;

    case 1071:  /* *prefetch_sse */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 2));
      break;

    case 1066:  /* adjust_stack_and_probe_di */
    case 1065:  /* adjust_stack_and_probe_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      break;

    case 2130:  /* **fma_fmsub_v8df_bcst_3 */
    case 2128:  /* **fma_fmsub_v16sf_bcst_3 */
    case 2126:  /* **fma_fmsub_v4df_bcst_3 */
    case 2124:  /* **fma_fmsub_v8sf_bcst_3 */
    case 2122:  /* **fma_fmsub_v2df_bcst_3 */
    case 2120:  /* **fma_fmsub_v4sf_bcst_3 */
    case 1030:  /* *movsicc_noc_zext */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      break;

    case 2014:  /* *fma_fmadd_v2df */
    case 2012:  /* *fma_fmadd_v4df */
    case 2008:  /* *fma_fmadd_v8df */
    case 2007:  /* *fma_fmadd_df */
    case 2005:  /* *fma_fmadd_v4sf */
    case 2003:  /* *fma_fmadd_v8sf */
    case 1999:  /* *fma_fmadd_v16sf */
    case 1998:  /* *fma_fmadd_sf */
    case 1997:  /* *fma_fmadd_v4df */
    case 1996:  /* *fma_fmadd_v8sf */
    case 1995:  /* *fma_fmadd_v2df */
    case 1994:  /* *fma_fmadd_v4sf */
    case 1993:  /* *fma_fmadd_df */
    case 1992:  /* *fma_fmadd_sf */
    case 1355:  /* avx512vl_loadv8hi_mask */
    case 1354:  /* avx512vl_loadv16hi_mask */
    case 1353:  /* avx512bw_loadv32hi_mask */
    case 1352:  /* avx512vl_loadv32qi_mask */
    case 1351:  /* avx512vl_loadv16qi_mask */
    case 1350:  /* avx512bw_loadv64qi_mask */
    case 1349:  /* avx512vl_loadv2df_mask */
    case 1348:  /* avx512vl_loadv4df_mask */
    case 1347:  /* avx512f_loadv8df_mask */
    case 1346:  /* avx512vl_loadv4sf_mask */
    case 1345:  /* avx512vl_loadv8sf_mask */
    case 1344:  /* avx512f_loadv16sf_mask */
    case 1343:  /* avx512vl_loadv2di_mask */
    case 1342:  /* avx512vl_loadv4di_mask */
    case 1341:  /* avx512f_loadv8di_mask */
    case 1340:  /* avx512vl_loadv4si_mask */
    case 1339:  /* avx512vl_loadv8si_mask */
    case 1338:  /* avx512f_loadv16si_mask */
    case 1036:  /* *xop_pcmov_df */
    case 1035:  /* *xop_pcmov_sf */
    case 1034:  /* *movsfcc_1_387 */
    case 1033:  /* *movdfcc_1 */
    case 1032:  /* *movxfcc_1 */
    case 1031:  /* *movqicc_noc */
    case 1029:  /* *movdicc_noc */
    case 1028:  /* *movsicc_noc */
    case 1027:  /* *movhicc_noc */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 1012:  /* *strlenqi_1 */
    case 1011:  /* *strlenqi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0));
      break;

    case 1010:  /* *cmpstrnqi_1 */
    case 1009:  /* *cmpstrnqi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 4), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 5), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 1008:  /* *cmpstrnqi_nz_1 */
    case 1007:  /* *cmpstrnqi_nz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 4), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 5), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 1006:  /* *rep_stosqi */
    case 1005:  /* *rep_stosqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0);
      recog_data.dup_num[1] = 3;
      break;

    case 1004:  /* *rep_stossi */
    case 1003:  /* *rep_stossi */
    case 1002:  /* *rep_stosdi_rex64 */
    case 1001:  /* *rep_stosdi_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0);
      recog_data.dup_num[1] = 3;
      break;

    case 1000:  /* *strsetqi_1 */
    case 999:  /* *strsetqi_1 */
    case 998:  /* *strsethi_1 */
    case 997:  /* *strsethi_1 */
    case 996:  /* *strsetsi_1 */
    case 995:  /* *strsetsi_1 */
    case 994:  /* *strsetdi_rex_1 */
    case 993:  /* *strsetdi_rex_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 992:  /* *rep_movqi */
    case 991:  /* *rep_movqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 1);
      recog_data.dup_num[3] = 5;
      break;

    case 990:  /* *rep_movsi */
    case 989:  /* *rep_movsi */
    case 988:  /* *rep_movdi_rex64 */
    case 987:  /* *rep_movdi_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0);
      recog_data.dup_num[3] = 5;
      break;

    case 986:  /* *strmovqi_1 */
    case 985:  /* *strmovqi_1 */
    case 984:  /* *strmovhi_1 */
    case 983:  /* *strmovhi_1 */
    case 982:  /* *strmovsi_1 */
    case 981:  /* *strmovsi_1 */
    case 980:  /* *strmovdi_rex_1 */
    case 979:  /* *strmovdi_rex_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 969:  /* fistdi2_ceil */
    case 968:  /* fistdi2_floor */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 5919:  /* atomic_storedi_fpu */
    case 5914:  /* atomic_loaddi_fpu */
    case 973:  /* fistsi2_ceil */
    case 972:  /* fistsi2_floor */
    case 971:  /* fisthi2_ceil */
    case 970:  /* fisthi2_floor */
    case 961:  /* frndintxf2_trunc_i387 */
    case 960:  /* frndintxf2_ceil_i387 */
    case 959:  /* frndintxf2_floor_i387 */
    case 958:  /* frndintxf2_roundeven_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 1399:  /* movdi_to_sse */
    case 1075:  /* stack_protect_set_1_di */
    case 1074:  /* stack_protect_set_1_si */
    case 951:  /* lrintxfdi2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 947:  /* fscalexf4_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[1] = 2;
      break;

    case 4409:  /* ssse3_pshufbv8qi3 */
    case 1080:  /* stack_protect_test_1_di */
    case 1079:  /* stack_protect_test_1_si */
    case 944:  /* fyl2xp1xf3_i387 */
    case 943:  /* fyl2xxf3_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 942:  /* atan2xf3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 941:  /* fptanxf4_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 1116:  /* xgetbv_rex64 */
    case 1086:  /* rdpmc_rex64 */
    case 945:  /* fxtractxf3_i387 */
    case 940:  /* sincosxf3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[0] = 2;
      break;

    case 937:  /* fprem1xf4_i387 */
    case 936:  /* fpremxf4_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 0);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[2] = 3;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[3] = 2;
      break;

    case 928:  /* *fop_df_6_i387 */
    case 927:  /* *fop_xf_6_i387 */
    case 926:  /* *fop_xf_6_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 925:  /* *fop_df_5_i387 */
    case 924:  /* *fop_xf_5_i387 */
    case 923:  /* *fop_xf_5_i387 */
    case 919:  /* *fop_xf_3_i387 */
    case 918:  /* *fop_df_3_i387 */
    case 917:  /* *fop_sf_3_i387 */
    case 916:  /* *fop_xf_3_i387 */
    case 915:  /* *fop_df_3_i387 */
    case 914:  /* *fop_sf_3_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 922:  /* *fop_df_4_i387 */
    case 921:  /* *fop_xf_4_i387 */
    case 920:  /* *fop_xf_4_i387 */
    case 913:  /* *fop_xf_2_i387 */
    case 912:  /* *fop_df_2_i387 */
    case 911:  /* *fop_sf_2_i387 */
    case 910:  /* *fop_xf_2_i387 */
    case 909:  /* *fop_df_2_i387 */
    case 908:  /* *fop_sf_2_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 900:  /* *tls_dynamic_gnu2_combine_64_di */
    case 899:  /* *tls_dynamic_gnu2_combine_64_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      break;

    case 5923:  /* storedi_via_sse */
    case 5922:  /* loaddi_via_sse */
    case 5921:  /* storedi_via_fpu */
    case 5920:  /* loaddi_via_fpu */
    case 5899:  /* avx512f_cvtneps2bf16_v4sf */
    case 5897:  /* avx512f_cvtneps2bf16_v8sf */
    case 5895:  /* avx512f_cvtneps2bf16_v16sf */
    case 5625:  /* *conflictv2di */
    case 5623:  /* *conflictv4di */
    case 5621:  /* *conflictv8di */
    case 5619:  /* *conflictv4si */
    case 5617:  /* *conflictv8si */
    case 5615:  /* *conflictv16si */
    case 5244:  /* *avx512f_vcvtph2ps512 */
    case 5242:  /* vcvtph2ps256 */
    case 5240:  /* *vcvtph2ps_load */
    case 4823:  /* aesimc */
    case 4796:  /* xop_frczv4df2 */
    case 4795:  /* xop_frczv8sf2 */
    case 4794:  /* xop_frczv2df2 */
    case 4793:  /* xop_frczv4sf2 */
    case 4792:  /* xop_frczdf2 */
    case 4791:  /* xop_frczsf2 */
    case 4720:  /* *avx512er_rsqrt28v8df */
    case 4716:  /* *avx512er_rsqrt28v16sf */
    case 4708:  /* *avx512er_rcp28v8df */
    case 4704:  /* *avx512er_rcp28v16sf */
    case 4700:  /* avx512er_exp2v8df */
    case 4696:  /* avx512er_exp2v16sf */
    case 4502:  /* sse4_1_phminposuw */
    case 4485:  /* sse4_1_movntdqa */
    case 4484:  /* avx2_movntdqa */
    case 4483:  /* avx512f_movntdqa */
    case 4454:  /* sse4a_movntdf */
    case 4453:  /* sse4a_movntsf */
    case 4350:  /* sse2_pmovmskb */
    case 4349:  /* avx2_pmovmskb */
    case 4316:  /* sse2_movmskpd */
    case 4315:  /* avx_movmskpd256 */
    case 4314:  /* sse_movmskps */
    case 4313:  /* avx_movmskps256 */
    case 3007:  /* avx512vl_getexpv2df */
    case 3003:  /* avx512vl_getexpv4df */
    case 2999:  /* avx512f_getexpv8df */
    case 2995:  /* avx512vl_getexpv4sf */
    case 2991:  /* avx512vl_getexpv8sf */
    case 2987:  /* avx512f_getexpv16sf */
    case 2791:  /* avx512vl_cvtq2maskv2di */
    case 2790:  /* avx512vl_cvtq2maskv4di */
    case 2789:  /* avx512f_cvtq2maskv8di */
    case 2788:  /* avx512vl_cvtd2maskv4si */
    case 2787:  /* avx512vl_cvtd2maskv8si */
    case 2786:  /* avx512f_cvtd2maskv16si */
    case 2785:  /* avx512vl_cvtw2maskv8hi */
    case 2784:  /* avx512vl_cvtw2maskv16hi */
    case 2783:  /* avx512bw_cvtw2maskv32hi */
    case 2782:  /* avx512vl_cvtb2maskv32qi */
    case 2781:  /* avx512vl_cvtb2maskv16qi */
    case 2780:  /* avx512bw_cvtb2maskv64qi */
    case 2732:  /* ufix_notruncv2dfv2di2 */
    case 2730:  /* ufix_notruncv4dfv4di2 */
    case 2726:  /* ufix_notruncv8dfv8di2 */
    case 2724:  /* fix_notruncv2dfv2di2 */
    case 2722:  /* fix_notruncv4dfv4di2 */
    case 2718:  /* fix_notruncv8dfv8di2 */
    case 2680:  /* ufix_notruncv4dfv4si2 */
    case 2676:  /* ufix_notruncv8dfv8si2 */
    case 2670:  /* avx_cvtpd2dq256 */
    case 2666:  /* avx512f_cvtpd2dq512 */
    case 2605:  /* sse2_cvtsd2siq_2 */
    case 2604:  /* sse2_cvtsd2si_2 */
    case 2579:  /* sse2_cvtpd2pi */
    case 2562:  /* *avx512dq_cvtps2uqqv4di */
    case 2558:  /* *avx512dq_cvtps2uqqv8di */
    case 2554:  /* *avx512dq_cvtps2qqv4di */
    case 2550:  /* *avx512dq_cvtps2qqv8di */
    case 2546:  /* *avx512vl_ufix_notruncv4sfv4si */
    case 2542:  /* *avx512vl_ufix_notruncv8sfv8si */
    case 2538:  /* *avx512f_ufix_notruncv16sfv16si */
    case 2534:  /* avx512f_fix_notruncv16sfv16si */
    case 2532:  /* sse2_fix_notruncv4sfv4si */
    case 2530:  /* avx_fix_notruncv8sfv8si */
    case 2498:  /* sse_cvtss2siq_2 */
    case 2497:  /* sse_cvtss2si_2 */
    case 1710:  /* *rsqrt14v2df */
    case 1708:  /* *rsqrt14v4df */
    case 1706:  /* *rsqrt14v8df */
    case 1704:  /* *rsqrt14v4sf */
    case 1702:  /* *rsqrt14v8sf */
    case 1700:  /* *rsqrt14v16sf */
    case 1699:  /* sse_rsqrtv4sf2 */
    case 1698:  /* avx_rsqrtv8sf2 */
    case 1660:  /* *rcp14v2df */
    case 1658:  /* *rcp14v4df */
    case 1656:  /* *rcp14v8df */
    case 1654:  /* *rcp14v4sf */
    case 1652:  /* *rcp14v8sf */
    case 1650:  /* *rcp14v16sf */
    case 1647:  /* sse_rcpv4sf2 */
    case 1646:  /* avx_rcpv8sf2 */
    case 1412:  /* sse2_movntv2di */
    case 1411:  /* avx_movntv4di */
    case 1410:  /* avx512f_movntv8di */
    case 1409:  /* sse2_movntv2df */
    case 1408:  /* avx_movntv4df */
    case 1407:  /* avx512f_movntv8df */
    case 1406:  /* sse_movntv4sf */
    case 1405:  /* avx_movntv8sf */
    case 1404:  /* avx512f_movntv16sf */
    case 1403:  /* sse2_movntidi */
    case 1402:  /* sse2_movntisi */
    case 1401:  /* sse3_lddqu */
    case 1400:  /* avx_lddqu256 */
    case 1312:  /* mmx_pmovmskb */
    case 1210:  /* mmx_rsqrtv2sf2 */
    case 1207:  /* mmx_rcpv2sf2 */
    case 1199:  /* sse_movntq */
    case 1179:  /* movdiridi */
    case 1178:  /* movdirisi */
    case 1115:  /* xgetbv */
    case 1098:  /* xsaves */
    case 1097:  /* xsavec */
    case 1096:  /* xsaveopt */
    case 1095:  /* xsave */
    case 1085:  /* rdpmc */
    case 977:  /* movmsk_df */
    case 976:  /* fxamxf2_i387 */
    case 975:  /* fxamdf2_i387 */
    case 974:  /* fxamsf2_i387 */
    case 953:  /* lrintxfsi2 */
    case 952:  /* lrintxfhi2 */
    case 950:  /* rintxf2 */
    case 946:  /* *f2xm1xf2_i387 */
    case 939:  /* cosxf2 */
    case 938:  /* sinxf2 */
    case 932:  /* *rsqrtsf2_sse */
    case 930:  /* truncxfdf2_i387_noop_unspec */
    case 929:  /* truncxfsf2_i387_noop_unspec */
    case 904:  /* *rcpsf2_sse */
    case 896:  /* *tls_dynamic_gnu2_lea_64_di */
    case 895:  /* *tls_dynamic_gnu2_lea_64_si */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 894:  /* *tls_dynamic_gnu2_combine_32 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 2));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      break;

    case 893:  /* *tls_dynamic_gnu2_call_32 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      break;

    case 892:  /* *tls_dynamic_gnu2_lea_32 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0, 0));
      break;

    case 891:  /* *add_tp_x32_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 890:  /* *add_tp_di */
    case 889:  /* *add_tp_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 885:  /* *tls_local_dynamic_32_once */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 884:  /* *tls_local_dynamic_base_64_largepic */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 881:  /* *tls_local_dynamic_base_32_gnu */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 880:  /* *tls_global_dynamic_64_largepic */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 879:  /* *tls_global_dynamic_64_di */
    case 878:  /* *tls_global_dynamic_64_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 877:  /* *tls_global_dynamic_32_gnu */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 876:  /* *parityhi2_cmp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      break;

    case 875:  /* paritysi2_cmp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      break;

    case 874:  /* paritydi2_cmp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      break;

    case 873:  /* bswaphi_lowpart */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 865:  /* *popcountsi2_zext_falsedep */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 864:  /* *popcountsi2_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      break;

    case 859:  /* *tbm_tzmsk_di */
    case 858:  /* *tbm_tzmsk_si */
    case 857:  /* *tbm_t1mskc_di */
    case 856:  /* *tbm_t1mskc_si */
    case 855:  /* *tbm_blsic_di */
    case 854:  /* *tbm_blsic_si */
    case 847:  /* *tbm_blcic_di */
    case 846:  /* *tbm_blcic_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 845:  /* *tbm_blci_di */
    case 844:  /* *tbm_blci_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 841:  /* *tbm_bextri_di */
    case 840:  /* *tbm_bextri_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      break;

    case 5918:  /* atomic_storedi_1 */
    case 5917:  /* atomic_storesi_1 */
    case 5916:  /* atomic_storehi_1 */
    case 5915:  /* atomic_storeqi_1 */
    case 5893:  /* avx512f_cvtne2ps2bf16_v8hi */
    case 5891:  /* avx512f_cvtne2ps2bf16_v16hi */
    case 5889:  /* avx512f_cvtne2ps2bf16_v32hi */
    case 5888:  /* avx512vp2intersect_2intersectv16si */
    case 5887:  /* avx512vp2intersect_2intersectv4si */
    case 5886:  /* avx512vp2intersect_2intersectv8si */
    case 5885:  /* avx512vp2intersect_2intersectv2di */
    case 5884:  /* avx512vp2intersect_2intersectv4di */
    case 5883:  /* avx512vp2intersect_2intersectv8di */
    case 5879:  /* avx512vl_vpshufbitqmbv16qi */
    case 5877:  /* avx512vl_vpshufbitqmbv32qi */
    case 5875:  /* avx512vl_vpshufbitqmbv64qi */
    case 5871:  /* vaesenclast_v64qi */
    case 5870:  /* vaesenclast_v16qi */
    case 5869:  /* vaesenclast_v32qi */
    case 5868:  /* vaesenc_v64qi */
    case 5867:  /* vaesenc_v16qi */
    case 5866:  /* vaesenc_v32qi */
    case 5865:  /* vaesdeclast_v64qi */
    case 5864:  /* vaesdeclast_v16qi */
    case 5863:  /* vaesdeclast_v32qi */
    case 5862:  /* vaesdec_v64qi */
    case 5861:  /* vaesdec_v16qi */
    case 5860:  /* vaesdec_v32qi */
    case 5732:  /* vgf2p8mulb_v16qi */
    case 5730:  /* vgf2p8mulb_v32qi */
    case 5728:  /* vgf2p8mulb_v64qi */
    case 5662:  /* vpmultishiftqbv32qi */
    case 5660:  /* vpmultishiftqbv16qi */
    case 5658:  /* vpmultishiftqbv64qi */
    case 5632:  /* sha256msg2 */
    case 5631:  /* sha256msg1 */
    case 5629:  /* sha1nexte */
    case 5628:  /* sha1msg2 */
    case 5627:  /* sha1msg1 */
    case 5585:  /* avx512vl_getmantv2df */
    case 5581:  /* avx512vl_getmantv4df */
    case 5577:  /* avx512f_getmantv8df */
    case 5573:  /* avx512vl_getmantv4sf */
    case 5569:  /* avx512vl_getmantv8sf */
    case 5565:  /* avx512f_getmantv16sf */
    case 5559:  /* avx512dq_fpclassv2df */
    case 5557:  /* avx512dq_fpclassv4df */
    case 5555:  /* avx512dq_fpclassv8df */
    case 5553:  /* avx512dq_fpclassv4sf */
    case 5551:  /* avx512dq_fpclassv8sf */
    case 5549:  /* avx512dq_fpclassv16sf */
    case 5253:  /* *avx512f_vcvtps2ph512 */
    case 5251:  /* vcvtps2ph256 */
    case 5250:  /* *vcvtps2ph_store */
    case 5047:  /* avx_vpermilvarv2df3 */
    case 5045:  /* avx_vpermilvarv4df3 */
    case 5043:  /* avx512f_vpermilvarv8df3 */
    case 5041:  /* avx_vpermilvarv4sf3 */
    case 5039:  /* avx_vpermilvarv8sf3 */
    case 5037:  /* avx512f_vpermilvarv16sf3 */
    case 4871:  /* avx512bw_permvarv32hi */
    case 4869:  /* avx512vl_permvarv16hi */
    case 4867:  /* avx512vl_permvarv8hi */
    case 4865:  /* avx512vl_permvarv32qi */
    case 4863:  /* avx512vl_permvarv16qi */
    case 4861:  /* avx512bw_permvarv64qi */
    case 4859:  /* avx2_permvarv4df */
    case 4857:  /* avx2_permvarv4di */
    case 4855:  /* avx512f_permvarv8df */
    case 4853:  /* avx512f_permvarv8di */
    case 4851:  /* avx512f_permvarv16sf */
    case 4849:  /* avx512f_permvarv16si */
    case 4847:  /* avx2_permvarv8sf */
    case 4845:  /* avx2_permvarv8si */
    case 4824:  /* aeskeygenassist */
    case 4822:  /* aesdeclast */
    case 4821:  /* aesdec */
    case 4820:  /* aesenclast */
    case 4819:  /* aesenc */
    case 4667:  /* sse4_1_roundpd */
    case 4666:  /* avx_roundpd256 */
    case 4665:  /* sse4_1_roundps */
    case 4664:  /* avx_roundps256 */
    case 4460:  /* sse4a_insertq */
    case 4458:  /* sse4a_extrq */
    case 4418:  /* ssse3_psignv2si3 */
    case 4417:  /* ssse3_psignv4hi3 */
    case 4416:  /* ssse3_psignv8qi3 */
    case 4415:  /* ssse3_psignv4si3 */
    case 4414:  /* avx2_psignv8si3 */
    case 4413:  /* ssse3_psignv8hi3 */
    case 4412:  /* avx2_psignv16hi3 */
    case 4411:  /* ssse3_psignv16qi3 */
    case 4410:  /* avx2_psignv32qi3 */
    case 4407:  /* ssse3_pshufbv16qi3 */
    case 4405:  /* avx2_pshufbv32qi3 */
    case 4403:  /* avx512bw_pshufbv64qi3 */
    case 4390:  /* avx512bw_pmaddubsw512v32hi */
    case 4388:  /* avx512bw_pmaddubsw512v16hi */
    case 4386:  /* avx512bw_pmaddubsw512v8hi */
    case 4312:  /* sse2_psadbw */
    case 4311:  /* avx2_psadbw */
    case 4310:  /* avx512f_psadbw */
    case 4262:  /* *avx512bw_pshufhwv32hi */
    case 4256:  /* *avx512bw_pshuflwv32hi */
    case 4002:  /* avx512vl_testnmv2di3 */
    case 4000:  /* avx512vl_testnmv4di3 */
    case 3998:  /* avx512f_testnmv8di3 */
    case 3996:  /* avx512vl_testnmv4si3 */
    case 3994:  /* avx512vl_testnmv8si3 */
    case 3992:  /* avx512f_testnmv16si3 */
    case 3990:  /* avx512vl_testnmv8hi3 */
    case 3988:  /* avx512vl_testnmv16hi3 */
    case 3986:  /* avx512bw_testnmv32hi3 */
    case 3984:  /* avx512vl_testnmv16qi3 */
    case 3982:  /* avx512vl_testnmv32qi3 */
    case 3980:  /* avx512bw_testnmv64qi3 */
    case 3978:  /* avx512vl_testmv2di3 */
    case 3976:  /* avx512vl_testmv4di3 */
    case 3974:  /* avx512f_testmv8di3 */
    case 3972:  /* avx512vl_testmv4si3 */
    case 3970:  /* avx512vl_testmv8si3 */
    case 3968:  /* avx512f_testmv16si3 */
    case 3966:  /* avx512vl_testmv8hi3 */
    case 3964:  /* avx512vl_testmv16hi3 */
    case 3962:  /* avx512bw_testmv32hi3 */
    case 3960:  /* avx512vl_testmv16qi3 */
    case 3958:  /* avx512vl_testmv32qi3 */
    case 3956:  /* avx512bw_testmv64qi3 */
    case 3819:  /* avx512vl_gtv8hi3 */
    case 3817:  /* avx512vl_gtv16hi3 */
    case 3815:  /* avx512bw_gtv32hi3 */
    case 3813:  /* avx512vl_gtv32qi3 */
    case 3811:  /* avx512vl_gtv16qi3 */
    case 3809:  /* avx512bw_gtv64qi3 */
    case 3807:  /* avx512vl_gtv2di3 */
    case 3805:  /* avx512vl_gtv4di3 */
    case 3803:  /* avx512f_gtv8di3 */
    case 3801:  /* avx512vl_gtv4si3 */
    case 3799:  /* avx512vl_gtv8si3 */
    case 3797:  /* avx512f_gtv16si3 */
    case 3786:  /* avx512vl_eqv2di3_1 */
    case 3784:  /* avx512vl_eqv4di3_1 */
    case 3782:  /* avx512f_eqv8di3_1 */
    case 3780:  /* avx512vl_eqv4si3_1 */
    case 3778:  /* avx512vl_eqv8si3_1 */
    case 3776:  /* avx512f_eqv16si3_1 */
    case 3774:  /* avx512vl_eqv8hi3_1 */
    case 3772:  /* avx512vl_eqv16hi3_1 */
    case 3770:  /* avx512bw_eqv32hi3_1 */
    case 3768:  /* avx512vl_eqv32qi3_1 */
    case 3766:  /* avx512vl_eqv16qi3_1 */
    case 3764:  /* avx512bw_eqv64qi3_1 */
    case 3488:  /* avx512bw_pmaddwd512v8hi */
    case 3486:  /* avx512bw_pmaddwd512v16hi */
    case 3484:  /* avx512bw_pmaddwd512v32hi */
    case 3099:  /* avx512vl_rndscalev2df */
    case 3095:  /* avx512vl_rndscalev4df */
    case 3091:  /* avx512f_rndscalev8df */
    case 3087:  /* avx512vl_rndscalev4sf */
    case 3083:  /* avx512vl_rndscalev8sf */
    case 3079:  /* avx512f_rndscalev16sf */
    case 2965:  /* avx512vl_scalefv2df */
    case 2961:  /* avx512vl_scalefv4df */
    case 2957:  /* avx512f_scalefv8df */
    case 2953:  /* avx512vl_scalefv4sf */
    case 2949:  /* avx512vl_scalefv8sf */
    case 2945:  /* avx512f_scalefv16sf */
    case 1826:  /* *reducepv2df */
    case 1824:  /* *reducepv4df */
    case 1822:  /* *reducepv8df */
    case 1820:  /* *reducepv4sf */
    case 1818:  /* *reducepv8sf */
    case 1816:  /* *reducepv16sf */
    case 1780:  /* ieee_minv2df3 */
    case 1778:  /* ieee_maxv2df3 */
    case 1776:  /* ieee_minv4df3 */
    case 1774:  /* ieee_maxv4df3 */
    case 1770:  /* ieee_minv8df3 */
    case 1766:  /* ieee_maxv8df3 */
    case 1764:  /* ieee_minv4sf3 */
    case 1762:  /* ieee_maxv4sf3 */
    case 1760:  /* ieee_minv8sf3 */
    case 1758:  /* ieee_maxv8sf3 */
    case 1754:  /* ieee_minv16sf3 */
    case 1750:  /* ieee_maxv16sf3 */
    case 1311:  /* mmx_psadbw */
    case 1211:  /* mmx_rsqit1v2sf3 */
    case 1209:  /* mmx_rcpit2v2sf3 */
    case 1208:  /* mmx_rcpit1v2sf3 */
    case 1206:  /* mmx_ieee_minv2sf3 */
    case 1205:  /* mmx_ieee_maxv2sf3 */
    case 1106:  /* xsaves64 */
    case 1105:  /* xsavec64 */
    case 1104:  /* xsaveopt64 */
    case 1103:  /* xsave64 */
    case 1102:  /* xsaves_rex64 */
    case 1101:  /* xsavec_rex64 */
    case 1100:  /* xsaveopt_rex64 */
    case 1099:  /* xsave_rex64 */
    case 1084:  /* sse4_2_crc32di */
    case 1083:  /* sse4_2_crc32si */
    case 1082:  /* sse4_2_crc32hi */
    case 1081:  /* sse4_2_crc32qi */
    case 1044:  /* *ieee_smindf3 */
    case 1043:  /* *ieee_smaxdf3 */
    case 1042:  /* *ieee_sminsf3 */
    case 1041:  /* *ieee_smaxsf3 */
    case 949:  /* sse4_1_rounddf2 */
    case 948:  /* sse4_1_roundsf2 */
    case 839:  /* bmi2_pext_di3 */
    case 838:  /* bmi2_pext_si3 */
    case 837:  /* bmi2_pdep_di3 */
    case 836:  /* bmi2_pdep_si3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 835:  /* *bmi2_bzhi_di3_3 */
    case 834:  /* *bmi2_bzhi_si3_3 */
    case 833:  /* *bmi2_bzhi_di3_2 */
    case 832:  /* *bmi2_bzhi_si3_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      break;

    case 831:  /* *bmi2_bzhi_di3_1_ccz */
    case 830:  /* *bmi2_bzhi_si3_1_ccz */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 1), 0), 0);
      recog_data.dup_num[0] = 2;
      break;

    case 829:  /* *bmi2_bzhi_di3_1 */
    case 828:  /* *bmi2_bzhi_si3_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 0), 0);
      recog_data.dup_num[0] = 2;
      break;

    case 827:  /* *bmi2_bzhi_di3 */
    case 826:  /* *bmi2_bzhi_si3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 0), 0);
      recog_data.dup_num[0] = 2;
      break;

    case 825:  /* *bmi_blsr_di_ccz */
    case 824:  /* *bmi_blsr_si_ccz */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 823:  /* *bmi_blsr_di_cmp */
    case 822:  /* *bmi_blsr_si_cmp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1);
      recog_data.dup_num[2] = 1;
      break;

    case 853:  /* *tbm_blsfill_di */
    case 852:  /* *tbm_blsfill_si */
    case 851:  /* *tbm_blcs_di */
    case 850:  /* *tbm_blcs_si */
    case 849:  /* *tbm_blcmsk_di */
    case 848:  /* *tbm_blcmsk_si */
    case 843:  /* *tbm_blcfill_di */
    case 842:  /* *tbm_blcfill_si */
    case 821:  /* *bmi_blsr_di */
    case 820:  /* *bmi_blsr_si */
    case 819:  /* *bmi_blsmsk_di */
    case 818:  /* *bmi_blsmsk_si */
    case 817:  /* *bmi_blsi_di */
    case 816:  /* *bmi_blsi_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 815:  /* *bmi_bextr_di_ccz */
    case 814:  /* *bmi_bextr_si_ccz */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      break;

    case 1068:  /* probe_stack_range_di */
    case 1067:  /* probe_stack_range_si */
    case 898:  /* *tls_dynamic_gnu2_call_64_di */
    case 897:  /* *tls_dynamic_gnu2_call_64_si */
    case 813:  /* bmi_bextr_di */
    case 812:  /* bmi_bextr_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      break;

    case 809:  /* *lzcnt_di_falsedep */
    case 808:  /* *tzcnt_di_falsedep */
    case 807:  /* *lzcnt_si_falsedep */
    case 806:  /* *tzcnt_si_falsedep */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 1064:  /* probe_stack_1_di */
    case 1063:  /* probe_stack_1_si */
    case 1062:  /* allocate_stack_worker_probe_di */
    case 1061:  /* allocate_stack_worker_probe_si */
    case 967:  /* *fistdi2_ceil_1 */
    case 966:  /* *fistdi2_floor_1 */
    case 965:  /* *fistsi2_ceil_1 */
    case 964:  /* *fistsi2_floor_1 */
    case 963:  /* *fisthi2_ceil_1 */
    case 962:  /* *fisthi2_floor_1 */
    case 957:  /* frndintxf2_trunc */
    case 956:  /* frndintxf2_ceil */
    case 955:  /* frndintxf2_floor */
    case 954:  /* frndintxf2_roundeven */
    case 811:  /* lzcnt_hi */
    case 810:  /* tzcnt_hi */
    case 805:  /* lzcnt_di */
    case 804:  /* tzcnt_di */
    case 803:  /* lzcnt_si */
    case 802:  /* tzcnt_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      break;

    case 797:  /* bsr */
    case 796:  /* bsr_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 863:  /* *popcountdi2_falsedep */
    case 862:  /* *popcountsi2_falsedep */
    case 801:  /* *clzdi2_lzcnt_falsedep */
    case 800:  /* *clzsi2_lzcnt_falsedep */
    case 795:  /* *ctzdi2_falsedep */
    case 794:  /* *ctzsi2_falsedep */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 789:  /* *tzcntdi_1_falsedep */
    case 788:  /* *tzcntsi_1_falsedep */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (pat, 0, 2), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 791:  /* *bsfdi_1 */
    case 790:  /* *bsfsi_1 */
    case 787:  /* *tzcntdi_1 */
    case 786:  /* *tzcntsi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 4456:  /* sse4a_vmmovntv2df */
    case 4455:  /* sse4a_vmmovntv4sf */
    case 2602:  /* sse2_cvtsd2siq */
    case 2600:  /* sse2_cvtsd2si */
    case 2594:  /* avx512f_vcvtsd2usiq */
    case 2592:  /* avx512f_vcvtsd2usi */
    case 2586:  /* avx512f_vcvtss2usiq */
    case 2584:  /* avx512f_vcvtss2usi */
    case 2564:  /* *avx512dq_cvtps2uqqv2di */
    case 2556:  /* *avx512dq_cvtps2qqv2di */
    case 2495:  /* sse_cvtss2siq */
    case 2493:  /* sse_cvtss2si */
    case 780:  /* set_got_offset_rex64 */
    case 779:  /* set_rip_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      break;

    case 777:  /* *set_got_labelled */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0));
      break;

    case 1144:  /* rdseeddi_1 */
    case 1143:  /* rdseedsi_1 */
    case 1142:  /* rdseedhi_1 */
    case 1141:  /* rdranddi_1 */
    case 1140:  /* rdrandsi_1 */
    case 1139:  /* rdrandhi_1 */
    case 1117:  /* fnstenv */
    case 776:  /* *set_got */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      break;

    case 772:  /* *simple_return_indirect_internaldi */
    case 771:  /* *simple_return_indirect_internalsi */
    case 770:  /* simple_return_pop_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 4363:  /* sse2_clflush */
    case 4361:  /* sse_ldmxcsr */
    case 1192:  /* cldemote */
    case 1189:  /* umonitor_di */
    case 1188:  /* umonitor_si */
    case 1171:  /* clzero_di */
    case 1170:  /* clzero_si */
    case 1166:  /* clflushopt */
    case 1165:  /* clwb */
    case 1163:  /* xabort */
    case 1159:  /* *clrssbsydi */
    case 1158:  /* *clrssbsysi */
    case 1152:  /* *rstorsspdi */
    case 1151:  /* *rstorsspsi */
    case 1149:  /* incsspdi */
    case 1148:  /* incsspsi */
    case 1138:  /* ptwritedi */
    case 1137:  /* ptwritesi */
    case 1136:  /* wrgsbasedi */
    case 1135:  /* wrfsbasedi */
    case 1134:  /* wrgsbasesi */
    case 1133:  /* wrfsbasesi */
    case 1122:  /* *lwp_llwpcbdi_1 */
    case 1121:  /* *lwp_llwpcbsi_1 */
    case 1094:  /* fxrstor64 */
    case 1093:  /* fxrstor */
    case 784:  /* split_stack_return */
    case 775:  /* pad */
    case 774:  /* nops */
    case 766:  /* prologue_use */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      break;

    case 5912:  /* mfence_sse2 */
    case 5911:  /* *sse_sfence */
    case 5910:  /* *sse2_lfence */
    case 1145:  /* *pause */
    case 765:  /* *memory_blockage */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0);
      recog_data.dup_num[0] = 0;
      break;

    case 1316:  /* *mmx_femms */
    case 1315:  /* *mmx_emms */
    case 1193:  /* speculation_barrier */
    case 1177:  /* wbnoinvd */
    case 1176:  /* wbinvd */
    case 1164:  /* xtest_1 */
    case 1162:  /* xend */
    case 1160:  /* nop_endbr */
    case 1157:  /* setssbsy */
    case 1150:  /* saveprevssp */
    case 1120:  /* fnclex */
    case 1070:  /* ud2 */
    case 1069:  /* trap */
    case 978:  /* cld */
    case 783:  /* *leave_rex64 */
    case 782:  /* *leave */
    case 781:  /* eh_return_internal */
    case 773:  /* nop */
    case 769:  /* simple_return_internal_long */
    case 768:  /* interrupt_return */
    case 767:  /* simple_return_internal */
    case 764:  /* blockage */
      break;

    case 763:  /* *sibcall_value_pop_memory */
    case 762:  /* *sibcall_value_pop */
    case 761:  /* *call_value_pop */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      break;

    case 756:  /* *sibcall_value_GOT_32 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 1694:  /* *sse2_vmsqrtv2df2 */
    case 1690:  /* *sse_vmsqrtv4sf2 */
    case 755:  /* *call_value_got_x32 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 5152:  /* vec_set_hi_v32qi */
    case 5150:  /* vec_set_hi_v16hi */
    case 5147:  /* vec_set_hi_v8sf */
    case 5145:  /* vec_set_hi_v8si */
    case 5139:  /* vec_set_hi_v4df */
    case 5137:  /* vec_set_hi_v4di */
    case 4232:  /* vec_set_hi_v8di */
    case 4230:  /* vec_set_hi_v8df */
    case 4224:  /* vec_set_hi_v16si */
    case 4222:  /* vec_set_hi_v16sf */
    case 3954:  /* *xorv2di3_bcst */
    case 3952:  /* *iorv2di3_bcst */
    case 3950:  /* *andv2di3_bcst */
    case 3948:  /* *xorv4di3_bcst */
    case 3946:  /* *iorv4di3_bcst */
    case 3944:  /* *andv4di3_bcst */
    case 3942:  /* *xorv8di3_bcst */
    case 3940:  /* *iorv8di3_bcst */
    case 3938:  /* *andv8di3_bcst */
    case 3936:  /* *xorv4si3_bcst */
    case 3934:  /* *iorv4si3_bcst */
    case 3932:  /* *andv4si3_bcst */
    case 3930:  /* *xorv8si3_bcst */
    case 3928:  /* *iorv8si3_bcst */
    case 3926:  /* *andv8si3_bcst */
    case 3924:  /* *xorv16si3_bcst */
    case 3922:  /* *iorv16si3_bcst */
    case 3920:  /* *andv16si3_bcst */
    case 3853:  /* *andnotv2di3 */
    case 3852:  /* *andnotv4di3 */
    case 3851:  /* *andnotv4si3 */
    case 3850:  /* *andnotv8si3 */
    case 3849:  /* *andnotv8hi3 */
    case 3848:  /* *andnotv16hi3 */
    case 3847:  /* *andnotv32hi3 */
    case 3846:  /* *andnotv16qi3 */
    case 3845:  /* *andnotv32qi3 */
    case 3844:  /* *andnotv64qi3 */
    case 3843:  /* *andnotv8di3 */
    case 3842:  /* *andnotv16si3 */
    case 3381:  /* *addv2di3_bcst */
    case 3380:  /* *addv4di3_bcst */
    case 3379:  /* *addv8di3_bcst */
    case 3378:  /* *addv4si3_bcst */
    case 3377:  /* *addv8si3_bcst */
    case 3376:  /* *addv16si3_bcst */
    case 3318:  /* *avx512vl_us_truncatev2div2si2 */
    case 3317:  /* *avx512vl_truncatev2div2si2 */
    case 3316:  /* *avx512vl_ss_truncatev2div2si2 */
    case 3279:  /* *avx512vl_us_truncatev4siv4hi2 */
    case 3278:  /* *avx512vl_truncatev4siv4hi2 */
    case 3277:  /* *avx512vl_ss_truncatev4siv4hi2 */
    case 3276:  /* *avx512vl_us_truncatev2div2hi2 */
    case 3275:  /* *avx512vl_truncatev2div2hi2 */
    case 3274:  /* *avx512vl_ss_truncatev2div2hi2 */
    case 3273:  /* *avx512vl_us_truncatev4div4hi2 */
    case 3272:  /* *avx512vl_truncatev4div4hi2 */
    case 3271:  /* *avx512vl_ss_truncatev4div4hi2 */
    case 3210:  /* *avx512vl_us_truncatev8hiv8qi2 */
    case 3209:  /* *avx512vl_truncatev8hiv8qi2 */
    case 3208:  /* *avx512vl_ss_truncatev8hiv8qi2 */
    case 3207:  /* *avx512vl_us_truncatev4siv4qi2 */
    case 3206:  /* *avx512vl_truncatev4siv4qi2 */
    case 3205:  /* *avx512vl_ss_truncatev4siv4qi2 */
    case 3204:  /* *avx512vl_us_truncatev8siv8qi2 */
    case 3203:  /* *avx512vl_truncatev8siv8qi2 */
    case 3202:  /* *avx512vl_ss_truncatev8siv8qi2 */
    case 3201:  /* *avx512vl_us_truncatev2div2qi2 */
    case 3200:  /* *avx512vl_truncatev2div2qi2 */
    case 3199:  /* *avx512vl_ss_truncatev2div2qi2 */
    case 3198:  /* *avx512vl_us_truncatev4div4qi2 */
    case 3197:  /* *avx512vl_truncatev4div4qi2 */
    case 3196:  /* *avx512vl_ss_truncatev4div4qi2 */
    case 3140:  /* sse2_loadhpd */
    case 2838:  /* sse_loadhps */
    case 2769:  /* *sse2_cvtpd2ps */
    case 2651:  /* *floatunsv2div2sf2 */
    case 2650:  /* *floatv2div2sf2 */
    case 1982:  /* *andnottf3 */
    case 1981:  /* *andnotdf3 */
    case 1980:  /* *andnotsf3 */
    case 1942:  /* avx512f_andnotv8df3 */
    case 1940:  /* avx512f_andnotv16sf3 */
    case 1938:  /* sse2_andnotv2df3 */
    case 1936:  /* avx_andnotv4df3 */
    case 1934:  /* sse_andnotv4sf3 */
    case 1932:  /* avx_andnotv8sf3 */
    case 1686:  /* sse2_vmsqrtv2df2 */
    case 1682:  /* sse_vmsqrtv4sf2 */
    case 1596:  /* *mulv8df3_bcst */
    case 1594:  /* *mulv16sf3_bcst */
    case 1592:  /* *mulv4df3_bcst */
    case 1590:  /* *mulv8sf3_bcst */
    case 1588:  /* *mulv2df3_bcst */
    case 1586:  /* *mulv4sf3_bcst */
    case 1548:  /* *addv8df3_bcst */
    case 1546:  /* *addv16sf3_bcst */
    case 1544:  /* *addv4df3_bcst */
    case 1542:  /* *addv8sf3_bcst */
    case 1540:  /* *addv2df3_bcst */
    case 1538:  /* *addv4sf3_bcst */
    case 1269:  /* mmx_andnotv2si3 */
    case 1268:  /* mmx_andnotv4hi3 */
    case 1267:  /* mmx_andnotv8qi3 */
    case 758:  /* *sibcall_value */
    case 757:  /* *sibcall_value */
    case 754:  /* *call_value */
    case 753:  /* *call_value */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 752:  /* *sibcall_pop_memory */
    case 751:  /* *sibcall_pop */
    case 750:  /* *call_pop */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      break;

    case 745:  /* *sibcall_GOT_32 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 0), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 0), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 1));
      break;

    case 744:  /* *call_got_x32 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      break;

    case 741:  /* *tablejump_1 */
    case 740:  /* *tablejump_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0));
      break;

    case 737:  /* jump */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 736:  /* *jcc */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 1845:  /* sse2_maskcmpv2df3 */
    case 1844:  /* avx_maskcmpv4df3 */
    case 1843:  /* sse_maskcmpv4sf3 */
    case 1842:  /* avx_maskcmpv8sf3 */
    case 1841:  /* *sse2_maskcmpv2df3_comm */
    case 1840:  /* *avx_maskcmpv4df3_comm */
    case 1839:  /* *sse_maskcmpv4sf3_comm */
    case 1838:  /* *avx_maskcmpv8sf3_comm */
    case 907:  /* *fop_df_1 */
    case 906:  /* *fop_sf_1 */
    case 905:  /* *fop_xf_1_i387 */
    case 903:  /* *fop_df_comm */
    case 902:  /* *fop_sf_comm */
    case 901:  /* *fop_xf_comm_i387 */
    case 735:  /* setcc_df_sse */
    case 734:  /* setcc_sf_sse */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 728:  /* *jcc_btdi_mask */
    case 727:  /* *jcc_btsi_mask */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 726:  /* *jcc_btdi_1 */
    case 725:  /* *jcc_btsi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 724:  /* *jcc_btdi */
    case 723:  /* *jcc_btsi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 2));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 722:  /* *btdi */
    case 721:  /* *btsi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 720:  /* *btcq_imm */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 2);
      recog_data.dup_num[1] = 1;
      break;

    case 719:  /* *btrq_imm */
    case 718:  /* *btsq_imm */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 2));
      break;

    case 717:  /* *btrdi_mask_1 */
    case 716:  /* *btrsi_mask_1 */
    case 711:  /* *btcdi_mask_1 */
    case 710:  /* *btsdi_mask_1 */
    case 709:  /* *btcsi_mask_1 */
    case 708:  /* *btssi_mask_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 715:  /* *btrdi_mask */
    case 714:  /* *btrsi_mask */
    case 707:  /* *btcdi_mask */
    case 706:  /* *btsdi_mask */
    case 705:  /* *btcsi_mask */
    case 704:  /* *btssi_mask */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 713:  /* *btrdi */
    case 712:  /* *btrsi */
    case 703:  /* *btcdi */
    case 702:  /* *btsdi */
    case 701:  /* *btcsi */
    case 700:  /* *btssi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 682:  /* ix86_rotrti3_doubleword */
    case 681:  /* ix86_rotrdi3_doubleword */
    case 680:  /* ix86_rotlti3_doubleword */
    case 679:  /* ix86_rotldi3_doubleword */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 4200:  /* vec_interleave_lowv4si */
    case 4198:  /* *avx512f_interleave_lowv16si */
    case 4196:  /* avx2_interleave_lowv8si */
    case 4194:  /* vec_interleave_highv4si */
    case 4192:  /* *avx512f_interleave_highv16si */
    case 4190:  /* avx2_interleave_highv8si */
    case 4188:  /* vec_interleave_lowv8hi */
    case 4186:  /* avx2_interleave_lowv16hi */
    case 4184:  /* *avx512bw_interleave_lowv32hi */
    case 4182:  /* vec_interleave_highv8hi */
    case 4180:  /* avx2_interleave_highv16hi */
    case 4178:  /* avx512bw_interleave_highv32hi */
    case 4176:  /* vec_interleave_lowv16qi */
    case 4174:  /* avx2_interleave_lowv32qi */
    case 4172:  /* avx512bw_interleave_lowv64qi */
    case 4170:  /* vec_interleave_highv16qi */
    case 4168:  /* avx2_interleave_highv32qi */
    case 4166:  /* avx512bw_interleave_highv64qi */
    case 3132:  /* vec_interleave_lowv2di */
    case 3130:  /* *avx512f_interleave_lowv8di */
    case 3128:  /* avx2_interleave_lowv4di */
    case 3126:  /* vec_interleave_highv2di */
    case 3124:  /* *avx512f_interleave_highv8di */
    case 3122:  /* avx2_interleave_highv4di */
    case 2936:  /* *vec_interleave_lowv2df */
    case 2933:  /* *avx_unpcklpd256 */
    case 2931:  /* *avx512f_unpcklpd512 */
    case 2930:  /* *vec_interleave_highv2df */
    case 2927:  /* avx_unpckhpd256 */
    case 2925:  /* *avx512f_unpckhpd512 */
    case 2819:  /* vec_interleave_lowv4sf */
    case 2816:  /* avx_unpcklps256 */
    case 2814:  /* *avx512f_unpcklps512 */
    case 2812:  /* vec_interleave_highv4sf */
    case 2810:  /* avx_unpckhps256 */
    case 2808:  /* *avx512f_unpckhps512 */
    case 2807:  /* sse_movlhps */
    case 2806:  /* sse_movhlps */
    case 1287:  /* mmx_punpckldq */
    case 1286:  /* mmx_punpckhdq */
    case 1285:  /* mmx_punpcklwd */
    case 1284:  /* mmx_punpckhwd */
    case 1283:  /* mmx_punpcklbw */
    case 1282:  /* mmx_punpckhbw */
    case 689:  /* *bmi2_rorxsi3_1_zext */
    case 642:  /* *bmi2_ashrsi3_1_zext */
    case 641:  /* *bmi2_lshrsi3_1_zext */
    case 593:  /* *bmi2_ashlsi3_1_zext */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 5237:  /* avx_vec_concatv8df */
    case 5236:  /* avx_vec_concatv16sf */
    case 5235:  /* avx_vec_concatv8di */
    case 5234:  /* avx_vec_concatv16si */
    case 5233:  /* avx_vec_concatv32hi */
    case 5232:  /* avx_vec_concatv64qi */
    case 5231:  /* avx_vec_concatv4df */
    case 5230:  /* avx_vec_concatv8sf */
    case 5229:  /* avx_vec_concatv4di */
    case 5228:  /* avx_vec_concatv8si */
    case 5227:  /* avx_vec_concatv16hi */
    case 5226:  /* avx_vec_concatv32qi */
    case 5224:  /* avx512bw_lshrvv32hi */
    case 5222:  /* avx512bw_ashlvv32hi */
    case 5220:  /* avx512vl_lshrvv16hi */
    case 5218:  /* avx512vl_ashlvv16hi */
    case 5216:  /* avx512vl_lshrvv8hi */
    case 5214:  /* avx512vl_ashlvv8hi */
    case 5212:  /* avx2_lshrvv2di */
    case 5210:  /* avx2_ashlvv2di */
    case 5208:  /* avx2_lshrvv4di */
    case 5206:  /* avx2_ashlvv4di */
    case 5204:  /* avx512f_lshrvv8di */
    case 5202:  /* avx512f_ashlvv8di */
    case 5200:  /* avx2_lshrvv4si */
    case 5198:  /* avx2_ashlvv4si */
    case 5196:  /* avx2_lshrvv8si */
    case 5194:  /* avx2_ashlvv8si */
    case 5192:  /* avx512f_lshrvv16si */
    case 5190:  /* avx512f_ashlvv16si */
    case 5188:  /* avx512bw_ashrvv32hi */
    case 5186:  /* avx512vl_ashrvv16hi */
    case 5184:  /* avx512vl_ashrvv8hi */
    case 5182:  /* avx512f_ashrvv8di */
    case 5180:  /* avx2_ashrvv4di */
    case 5178:  /* avx2_ashrvv2di */
    case 5176:  /* avx512f_ashrvv16si */
    case 5174:  /* avx2_ashrvv8si */
    case 5172:  /* avx2_ashrvv4si */
    case 4778:  /* xop_rotrv2di3 */
    case 4777:  /* xop_rotrv4si3 */
    case 4776:  /* xop_rotrv8hi3 */
    case 4775:  /* xop_rotrv16qi3 */
    case 4774:  /* xop_rotlv2di3 */
    case 4773:  /* xop_rotlv4si3 */
    case 4772:  /* xop_rotlv8hi3 */
    case 4771:  /* xop_rotlv16qi3 */
    case 4295:  /* *vec_concatv2di_0 */
    case 4294:  /* vec_concatv2di */
    case 4293:  /* *vec_concatv4si_0 */
    case 4292:  /* *vec_concatv4si */
    case 4291:  /* *vec_concatv2si */
    case 4290:  /* *vec_concatv2si_sse4_1 */
    case 3919:  /* *xorv8hi3 */
    case 3918:  /* *iorv8hi3 */
    case 3917:  /* *andv8hi3 */
    case 3916:  /* *xorv16hi3 */
    case 3915:  /* *iorv16hi3 */
    case 3914:  /* *andv16hi3 */
    case 3913:  /* *xorv32hi3 */
    case 3912:  /* *iorv32hi3 */
    case 3911:  /* *andv32hi3 */
    case 3910:  /* *xorv16qi3 */
    case 3909:  /* *iorv16qi3 */
    case 3908:  /* *andv16qi3 */
    case 3907:  /* *xorv32qi3 */
    case 3906:  /* *iorv32qi3 */
    case 3905:  /* *andv32qi3 */
    case 3904:  /* *xorv64qi3 */
    case 3903:  /* *iorv64qi3 */
    case 3902:  /* *andv64qi3 */
    case 3900:  /* *xorv2di3 */
    case 3898:  /* *iorv2di3 */
    case 3896:  /* *andv2di3 */
    case 3894:  /* *xorv4di3 */
    case 3892:  /* *iorv4di3 */
    case 3890:  /* *andv4di3 */
    case 3888:  /* *xorv8di3 */
    case 3886:  /* *iorv8di3 */
    case 3884:  /* *andv8di3 */
    case 3882:  /* *xorv4si3 */
    case 3880:  /* *iorv4si3 */
    case 3878:  /* *andv4si3 */
    case 3876:  /* *xorv8si3 */
    case 3874:  /* *iorv8si3 */
    case 3872:  /* *andv8si3 */
    case 3870:  /* *xorv16si3 */
    case 3868:  /* *iorv16si3 */
    case 3866:  /* *andv16si3 */
    case 3840:  /* *one_cmplv2di2 */
    case 3838:  /* *one_cmplv4di2 */
    case 3836:  /* *one_cmplv4si2 */
    case 3834:  /* *one_cmplv8si2 */
    case 3833:  /* *one_cmplv8hi2 */
    case 3832:  /* *one_cmplv16hi2 */
    case 3831:  /* *one_cmplv32hi2 */
    case 3830:  /* *one_cmplv16qi2 */
    case 3829:  /* *one_cmplv32qi2 */
    case 3828:  /* *one_cmplv64qi2 */
    case 3826:  /* *one_cmplv8di2 */
    case 3824:  /* *one_cmplv16si2 */
    case 3823:  /* sse2_gtv4si3 */
    case 3822:  /* sse2_gtv8hi3 */
    case 3821:  /* sse2_gtv16qi3 */
    case 3796:  /* avx2_gtv4di3 */
    case 3795:  /* avx2_gtv8si3 */
    case 3794:  /* avx2_gtv16hi3 */
    case 3793:  /* avx2_gtv32qi3 */
    case 3792:  /* sse4_2_gtv2di3 */
    case 3791:  /* *sse2_eqv4si3 */
    case 3790:  /* *sse2_eqv8hi3 */
    case 3789:  /* *sse2_eqv16qi3 */
    case 3788:  /* *sse4_1_eqv2di3 */
    case 3763:  /* *avx2_eqv4di3 */
    case 3762:  /* *avx2_eqv8si3 */
    case 3761:  /* *avx2_eqv16hi3 */
    case 3760:  /* *avx2_eqv32qi3 */
    case 3759:  /* *uminv16qi3 */
    case 3758:  /* *umaxv16qi3 */
    case 3756:  /* *sse4_1_uminv4si3 */
    case 3754:  /* *sse4_1_umaxv4si3 */
    case 3752:  /* *sse4_1_uminv8hi3 */
    case 3750:  /* *sse4_1_umaxv8hi3 */
    case 3749:  /* *sminv8hi3 */
    case 3748:  /* *smaxv8hi3 */
    case 3746:  /* *sse4_1_sminv4si3 */
    case 3744:  /* *sse4_1_smaxv4si3 */
    case 3742:  /* *sse4_1_sminv16qi3 */
    case 3740:  /* *sse4_1_smaxv16qi3 */
    case 3738:  /* *uminv8hi3 */
    case 3736:  /* *umaxv8hi3 */
    case 3734:  /* *sminv8hi3 */
    case 3732:  /* *smaxv8hi3 */
    case 3730:  /* *uminv16hi3 */
    case 3728:  /* *umaxv16hi3 */
    case 3726:  /* *sminv16hi3 */
    case 3724:  /* *smaxv16hi3 */
    case 3722:  /* *uminv32hi3 */
    case 3720:  /* *umaxv32hi3 */
    case 3718:  /* *sminv32hi3 */
    case 3716:  /* *smaxv32hi3 */
    case 3714:  /* *uminv32qi3 */
    case 3712:  /* *umaxv32qi3 */
    case 3710:  /* *sminv32qi3 */
    case 3708:  /* *smaxv32qi3 */
    case 3706:  /* *uminv16qi3 */
    case 3704:  /* *umaxv16qi3 */
    case 3702:  /* *sminv16qi3 */
    case 3700:  /* *smaxv16qi3 */
    case 3698:  /* *uminv64qi3 */
    case 3696:  /* *umaxv64qi3 */
    case 3694:  /* *sminv64qi3 */
    case 3692:  /* *smaxv64qi3 */
    case 3690:  /* *avx512f_uminv2di3 */
    case 3688:  /* *avx512f_umaxv2di3 */
    case 3686:  /* *avx512f_sminv2di3 */
    case 3684:  /* *avx512f_smaxv2di3 */
    case 3682:  /* *avx512f_uminv4di3 */
    case 3680:  /* *avx512f_umaxv4di3 */
    case 3678:  /* *avx512f_sminv4di3 */
    case 3676:  /* *avx512f_smaxv4di3 */
    case 3674:  /* *avx512f_uminv8di3 */
    case 3672:  /* *avx512f_umaxv8di3 */
    case 3670:  /* *avx512f_sminv8di3 */
    case 3668:  /* *avx512f_smaxv8di3 */
    case 3666:  /* *avx512f_uminv4si3 */
    case 3664:  /* *avx512f_umaxv4si3 */
    case 3662:  /* *avx512f_sminv4si3 */
    case 3660:  /* *avx512f_smaxv4si3 */
    case 3658:  /* *avx512f_uminv8si3 */
    case 3656:  /* *avx512f_umaxv8si3 */
    case 3654:  /* *avx512f_sminv8si3 */
    case 3652:  /* *avx512f_smaxv8si3 */
    case 3650:  /* *avx512f_uminv16si3 */
    case 3648:  /* *avx512f_umaxv16si3 */
    case 3646:  /* *avx512f_sminv16si3 */
    case 3644:  /* *avx512f_smaxv16si3 */
    case 3643:  /* *avx2_uminv8si3 */
    case 3642:  /* *avx2_umaxv8si3 */
    case 3641:  /* *avx2_sminv8si3 */
    case 3640:  /* *avx2_smaxv8si3 */
    case 3639:  /* *avx2_uminv16hi3 */
    case 3638:  /* *avx2_umaxv16hi3 */
    case 3637:  /* *avx2_sminv16hi3 */
    case 3636:  /* *avx2_smaxv16hi3 */
    case 3635:  /* *avx2_uminv32qi3 */
    case 3634:  /* *avx2_umaxv32qi3 */
    case 3633:  /* *avx2_sminv32qi3 */
    case 3632:  /* *avx2_smaxv32qi3 */
    case 3630:  /* avx512vl_rorv2di */
    case 3628:  /* avx512vl_rolv2di */
    case 3626:  /* avx512vl_rorv4di */
    case 3624:  /* avx512vl_rolv4di */
    case 3622:  /* avx512f_rorv8di */
    case 3620:  /* avx512f_rolv8di */
    case 3618:  /* avx512vl_rorv4si */
    case 3616:  /* avx512vl_rolv4si */
    case 3614:  /* avx512vl_rorv8si */
    case 3612:  /* avx512vl_rolv8si */
    case 3610:  /* avx512f_rorv16si */
    case 3608:  /* avx512f_rolv16si */
    case 3606:  /* avx512vl_rorvv2di */
    case 3604:  /* avx512vl_rolvv2di */
    case 3602:  /* avx512vl_rorvv4di */
    case 3600:  /* avx512vl_rolvv4di */
    case 3598:  /* avx512f_rorvv8di */
    case 3596:  /* avx512f_rolvv8di */
    case 3594:  /* avx512vl_rorvv4si */
    case 3592:  /* avx512vl_rolvv4si */
    case 3590:  /* avx512vl_rorvv8si */
    case 3588:  /* avx512vl_rolvv8si */
    case 3586:  /* avx512f_rorvv16si */
    case 3584:  /* avx512f_rolvv16si */
    case 3583:  /* sse2_lshrv1ti3 */
    case 3582:  /* sse2_ashlv1ti3 */
    case 3581:  /* avx2_lshrv2ti3 */
    case 3580:  /* avx2_ashlv2ti3 */
    case 3579:  /* avx512bw_lshrv1ti3 */
    case 3578:  /* avx512bw_ashlv1ti3 */
    case 3577:  /* avx512bw_lshrv2ti3 */
    case 3576:  /* avx512bw_ashlv2ti3 */
    case 3575:  /* avx512bw_lshrv4ti3 */
    case 3574:  /* avx512bw_ashlv4ti3 */
    case 3572:  /* lshrv8di3 */
    case 3570:  /* ashlv8di3 */
    case 3568:  /* lshrv16si3 */
    case 3566:  /* ashlv16si3 */
    case 3564:  /* lshrv32hi3 */
    case 3562:  /* ashlv32hi3 */
    case 3561:  /* lshrv2di3 */
    case 3560:  /* ashlv2di3 */
    case 3559:  /* lshrv4di3 */
    case 3558:  /* ashlv4di3 */
    case 3557:  /* lshrv4si3 */
    case 3556:  /* ashlv4si3 */
    case 3555:  /* lshrv8si3 */
    case 3554:  /* ashlv8si3 */
    case 3553:  /* lshrv8hi3 */
    case 3552:  /* ashlv8hi3 */
    case 3551:  /* lshrv16hi3 */
    case 3550:  /* ashlv16hi3 */
    case 3548:  /* *lshrv2di3 */
    case 3546:  /* *ashlv2di3 */
    case 3544:  /* *lshrv4di3 */
    case 3542:  /* *ashlv4di3 */
    case 3540:  /* *lshrv4si3 */
    case 3538:  /* *ashlv4si3 */
    case 3536:  /* *lshrv8si3 */
    case 3534:  /* *ashlv8si3 */
    case 3532:  /* *lshrv8hi3 */
    case 3530:  /* *ashlv8hi3 */
    case 3528:  /* *lshrv16hi3 */
    case 3526:  /* *ashlv16hi3 */
    case 3524:  /* ashrv8di3 */
    case 3522:  /* ashrv16si3 */
    case 3520:  /* ashrv4di3 */
    case 3518:  /* ashrv32hi3 */
    case 3517:  /* ashrv4si3 */
    case 3516:  /* ashrv8si3 */
    case 3515:  /* ashrv8hi3 */
    case 3514:  /* ashrv16hi3 */
    case 3512:  /* *ashrv2di3 */
    case 3510:  /* *ashrv4si3 */
    case 3508:  /* *ashrv8si3 */
    case 3506:  /* *ashrv8hi3 */
    case 3504:  /* *ashrv16hi3 */
    case 3502:  /* *sse4_1_mulv4si3 */
    case 3500:  /* *avx2_mulv8si3 */
    case 3498:  /* *avx512f_mulv16si3 */
    case 3496:  /* avx512dq_mulv2di3 */
    case 3494:  /* avx512dq_mulv4di3 */
    case 3492:  /* avx512dq_mulv8di3 */
    case 3458:  /* *mulv8hi3 */
    case 3456:  /* *mulv16hi3 */
    case 3454:  /* *mulv32hi3 */
    case 3452:  /* *sse2_ussubv8hi3 */
    case 3450:  /* *sse2_sssubv8hi3 */
    case 3448:  /* *sse2_usaddv8hi3 */
    case 3446:  /* *sse2_ssaddv8hi3 */
    case 3444:  /* *avx2_ussubv16hi3 */
    case 3442:  /* *avx2_sssubv16hi3 */
    case 3440:  /* *avx2_usaddv16hi3 */
    case 3438:  /* *avx2_ssaddv16hi3 */
    case 3436:  /* *avx512bw_ussubv32hi3 */
    case 3434:  /* *avx512bw_sssubv32hi3 */
    case 3432:  /* *avx512bw_usaddv32hi3 */
    case 3430:  /* *avx512bw_ssaddv32hi3 */
    case 3428:  /* *sse2_ussubv16qi3 */
    case 3426:  /* *sse2_sssubv16qi3 */
    case 3424:  /* *sse2_usaddv16qi3 */
    case 3422:  /* *sse2_ssaddv16qi3 */
    case 3420:  /* *avx2_ussubv32qi3 */
    case 3418:  /* *avx2_sssubv32qi3 */
    case 3416:  /* *avx2_usaddv32qi3 */
    case 3414:  /* *avx2_ssaddv32qi3 */
    case 3412:  /* *avx512bw_ussubv64qi3 */
    case 3410:  /* *avx512bw_sssubv64qi3 */
    case 3408:  /* *avx512bw_usaddv64qi3 */
    case 3406:  /* *avx512bw_ssaddv64qi3 */
    case 3369:  /* *subv2di3 */
    case 3368:  /* *addv2di3 */
    case 3367:  /* *subv4di3 */
    case 3366:  /* *addv4di3 */
    case 3365:  /* *subv8di3 */
    case 3364:  /* *addv8di3 */
    case 3363:  /* *subv4si3 */
    case 3362:  /* *addv4si3 */
    case 3361:  /* *subv8si3 */
    case 3360:  /* *addv8si3 */
    case 3359:  /* *subv16si3 */
    case 3358:  /* *addv16si3 */
    case 3357:  /* *subv8hi3 */
    case 3356:  /* *addv8hi3 */
    case 3355:  /* *subv16hi3 */
    case 3354:  /* *addv16hi3 */
    case 3353:  /* *subv32hi3 */
    case 3352:  /* *addv32hi3 */
    case 3351:  /* *subv16qi3 */
    case 3350:  /* *addv16qi3 */
    case 3349:  /* *subv32qi3 */
    case 3348:  /* *addv32qi3 */
    case 3347:  /* *subv64qi3 */
    case 3346:  /* *addv64qi3 */
    case 3145:  /* vec_concatv2df */
    case 2850:  /* *vec_concatv4sf_0 */
    case 2849:  /* *vec_concatv4sf */
    case 2848:  /* *vec_concatv2sf_sse */
    case 2847:  /* *vec_concatv2sf_sse4_1 */
    case 1991:  /* *xortf3 */
    case 1990:  /* *iortf3 */
    case 1989:  /* *andtf3 */
    case 1988:  /* *xordf3 */
    case 1987:  /* *iordf3 */
    case 1986:  /* *anddf3 */
    case 1985:  /* *xorsf3 */
    case 1984:  /* *iorsf3 */
    case 1983:  /* *andsf3 */
    case 1978:  /* *xorv8df3 */
    case 1976:  /* *iorv8df3 */
    case 1974:  /* *andv8df3 */
    case 1972:  /* *xorv16sf3 */
    case 1970:  /* *iorv16sf3 */
    case 1968:  /* *andv16sf3 */
    case 1966:  /* *xorv2df3 */
    case 1964:  /* *iorv2df3 */
    case 1962:  /* *andv2df3 */
    case 1960:  /* *xorv4df3 */
    case 1958:  /* *iorv4df3 */
    case 1956:  /* *andv4df3 */
    case 1954:  /* *xorv4sf3 */
    case 1952:  /* *iorv4sf3 */
    case 1950:  /* *andv4sf3 */
    case 1948:  /* *xorv8sf3 */
    case 1946:  /* *iorv8sf3 */
    case 1944:  /* *andv8sf3 */
    case 1748:  /* *sminv2df3 */
    case 1746:  /* *smaxv2df3 */
    case 1744:  /* *sminv4df3 */
    case 1742:  /* *smaxv4df3 */
    case 1738:  /* *sminv8df3 */
    case 1734:  /* *smaxv8df3 */
    case 1732:  /* *sminv4sf3 */
    case 1730:  /* *smaxv4sf3 */
    case 1728:  /* *sminv8sf3 */
    case 1726:  /* *smaxv8sf3 */
    case 1722:  /* *sminv16sf3 */
    case 1718:  /* *smaxv16sf3 */
    case 1632:  /* sse2_divv2df3 */
    case 1630:  /* avx_divv4df3 */
    case 1626:  /* avx512f_divv8df3 */
    case 1624:  /* sse_divv4sf3 */
    case 1622:  /* avx_divv8sf3 */
    case 1618:  /* avx512f_divv16sf3 */
    case 1584:  /* *mulv2df3 */
    case 1582:  /* *mulv4df3 */
    case 1578:  /* *mulv8df3 */
    case 1576:  /* *mulv4sf3 */
    case 1574:  /* *mulv8sf3 */
    case 1570:  /* *mulv16sf3 */
    case 1522:  /* *subv2df3 */
    case 1518:  /* *addv2df3 */
    case 1514:  /* *subv4df3 */
    case 1510:  /* *addv4df3 */
    case 1506:  /* *subv8df3 */
    case 1502:  /* *addv8df3 */
    case 1498:  /* *subv4sf3 */
    case 1494:  /* *addv4sf3 */
    case 1490:  /* *subv8sf3 */
    case 1486:  /* *addv8sf3 */
    case 1482:  /* *subv16sf3 */
    case 1478:  /* *addv16sf3 */
    case 1302:  /* *mmx_concatv2si */
    case 1278:  /* *mmx_xorv2si3 */
    case 1277:  /* *mmx_iorv2si3 */
    case 1276:  /* *mmx_andv2si3 */
    case 1275:  /* *mmx_xorv4hi3 */
    case 1274:  /* *mmx_iorv4hi3 */
    case 1273:  /* *mmx_andv4hi3 */
    case 1272:  /* *mmx_xorv8qi3 */
    case 1271:  /* *mmx_iorv8qi3 */
    case 1270:  /* *mmx_andv8qi3 */
    case 1266:  /* mmx_gtv2si3 */
    case 1265:  /* mmx_gtv4hi3 */
    case 1264:  /* mmx_gtv8qi3 */
    case 1263:  /* *mmx_eqv2si3 */
    case 1262:  /* *mmx_eqv4hi3 */
    case 1261:  /* *mmx_eqv8qi3 */
    case 1260:  /* mmx_lshrv1di3 */
    case 1259:  /* mmx_ashlv1di3 */
    case 1258:  /* mmx_lshrv2si3 */
    case 1257:  /* mmx_ashlv2si3 */
    case 1256:  /* mmx_lshrv4hi3 */
    case 1255:  /* mmx_ashlv4hi3 */
    case 1254:  /* mmx_ashrv2si3 */
    case 1253:  /* mmx_ashrv4hi3 */
    case 1252:  /* *mmx_uminv8qi3 */
    case 1251:  /* *mmx_umaxv8qi3 */
    case 1250:  /* *mmx_sminv4hi3 */
    case 1249:  /* *mmx_smaxv4hi3 */
    case 1243:  /* *mmx_mulv4hi3 */
    case 1242:  /* *mmx_ussubv4hi3 */
    case 1241:  /* *mmx_sssubv4hi3 */
    case 1240:  /* *mmx_usaddv4hi3 */
    case 1239:  /* *mmx_ssaddv4hi3 */
    case 1238:  /* *mmx_ussubv8qi3 */
    case 1237:  /* *mmx_sssubv8qi3 */
    case 1236:  /* *mmx_usaddv8qi3 */
    case 1235:  /* *mmx_ssaddv8qi3 */
    case 1234:  /* *mmx_subv1di3 */
    case 1233:  /* *mmx_addv1di3 */
    case 1232:  /* *mmx_subv2si3 */
    case 1231:  /* *mmx_addv2si3 */
    case 1230:  /* *mmx_subv4hi3 */
    case 1229:  /* *mmx_addv4hi3 */
    case 1228:  /* *mmx_subv8qi3 */
    case 1227:  /* *mmx_addv8qi3 */
    case 1224:  /* *mmx_concatv2sf */
    case 1217:  /* mmx_gev2sf3 */
    case 1216:  /* mmx_gtv2sf3 */
    case 1215:  /* *mmx_eqv2sf3 */
    case 1204:  /* *mmx_sminv2sf3 */
    case 1203:  /* *mmx_smaxv2sf3 */
    case 1202:  /* *mmx_mulv2sf3 */
    case 1201:  /* *mmx_subv2sf3 */
    case 1200:  /* *mmx_addv2sf3 */
    case 1040:  /* smindf3 */
    case 1039:  /* smaxdf3 */
    case 1038:  /* sminsf3 */
    case 1037:  /* smaxsf3 */
    case 684:  /* *bmi2_rorxdi3_1 */
    case 683:  /* *bmi2_rorxsi3_1 */
    case 636:  /* *bmi2_ashrdi3_1 */
    case 635:  /* *bmi2_lshrdi3_1 */
    case 634:  /* *bmi2_ashrsi3_1 */
    case 633:  /* *bmi2_lshrsi3_1 */
    case 590:  /* *bmi2_ashldi3_1 */
    case 589:  /* *bmi2_ashlsi3_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 629:  /* x86_shrd */
    case 628:  /* x86_64_shrd */
    case 584:  /* x86_shld */
    case 583:  /* x86_64_shld */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 678:  /* *rotrdi3_mask_1 */
    case 677:  /* *rotldi3_mask_1 */
    case 676:  /* *rotrsi3_mask_1 */
    case 675:  /* *rotlsi3_mask_1 */
    case 623:  /* *ashrti3_doubleword_mask_1 */
    case 622:  /* *lshrti3_doubleword_mask_1 */
    case 621:  /* *ashrdi3_doubleword_mask_1 */
    case 620:  /* *lshrdi3_doubleword_mask_1 */
    case 615:  /* *ashrdi3_mask_1 */
    case 614:  /* *lshrdi3_mask_1 */
    case 613:  /* *ashrsi3_mask_1 */
    case 612:  /* *lshrsi3_mask_1 */
    case 588:  /* *ashldi3_mask_1 */
    case 587:  /* *ashlsi3_mask_1 */
    case 580:  /* *ashlti3_doubleword_mask_1 */
    case 579:  /* *ashldi3_doubleword_mask_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      break;

    case 674:  /* *rotrdi3_mask */
    case 673:  /* *rotldi3_mask */
    case 672:  /* *rotrsi3_mask */
    case 671:  /* *rotlsi3_mask */
    case 619:  /* *ashrti3_doubleword_mask */
    case 618:  /* *lshrti3_doubleword_mask */
    case 617:  /* *ashrdi3_doubleword_mask */
    case 616:  /* *lshrdi3_doubleword_mask */
    case 611:  /* *ashrdi3_mask */
    case 610:  /* *lshrdi3_mask */
    case 609:  /* *ashrsi3_mask */
    case 608:  /* *lshrsi3_mask */
    case 586:  /* *ashldi3_mask */
    case 585:  /* *ashlsi3_mask */
    case 578:  /* *ashlti3_doubleword_mask */
    case 577:  /* *ashldi3_doubleword_mask */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1));
      break;

    case 563:  /* copysigntf3_var */
    case 562:  /* copysigndf3_var */
    case 561:  /* copysignsf3_var */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      break;

    case 5905:  /* avx512f_dpbf16ps_v4sf */
    case 5903:  /* avx512f_dpbf16ps_v8sf */
    case 5901:  /* avx512f_dpbf16ps_v16sf */
    case 5874:  /* vpclmulqdq_v2di */
    case 5873:  /* vpclmulqdq_v4di */
    case 5872:  /* vpclmulqdq_v8di */
    case 5853:  /* vpdpwssds_v4si */
    case 5852:  /* vpdpwssds_v8si */
    case 5851:  /* vpdpwssds_v16si */
    case 5844:  /* vpdpwssd_v4si */
    case 5843:  /* vpdpwssd_v8si */
    case 5842:  /* vpdpwssd_v16si */
    case 5835:  /* vpdpbusds_v4si */
    case 5834:  /* vpdpbusds_v8si */
    case 5833:  /* vpdpbusds_v16si */
    case 5826:  /* vpdpbusd_v4si */
    case 5825:  /* vpdpbusd_v8si */
    case 5824:  /* vpdpbusd_v16si */
    case 5805:  /* vpshldv_v2di */
    case 5804:  /* vpshldv_v4si */
    case 5803:  /* vpshldv_v8hi */
    case 5802:  /* vpshldv_v4di */
    case 5801:  /* vpshldv_v8si */
    case 5800:  /* vpshldv_v16hi */
    case 5799:  /* vpshldv_v8di */
    case 5798:  /* vpshldv_v16si */
    case 5797:  /* vpshldv_v32hi */
    case 5778:  /* vpshrdv_v2di */
    case 5777:  /* vpshrdv_v4si */
    case 5776:  /* vpshrdv_v8hi */
    case 5775:  /* vpshrdv_v4di */
    case 5774:  /* vpshrdv_v8si */
    case 5773:  /* vpshrdv_v16hi */
    case 5772:  /* vpshrdv_v8di */
    case 5771:  /* vpshrdv_v16si */
    case 5770:  /* vpshrdv_v32hi */
    case 5768:  /* vpshld_v2di */
    case 5766:  /* vpshld_v4si */
    case 5764:  /* vpshld_v8hi */
    case 5762:  /* vpshld_v4di */
    case 5760:  /* vpshld_v8si */
    case 5758:  /* vpshld_v16hi */
    case 5756:  /* vpshld_v8di */
    case 5754:  /* vpshld_v16si */
    case 5752:  /* vpshld_v32hi */
    case 5750:  /* vpshrd_v2di */
    case 5748:  /* vpshrd_v4si */
    case 5746:  /* vpshrd_v8hi */
    case 5744:  /* vpshrd_v4di */
    case 5742:  /* vpshrd_v8si */
    case 5740:  /* vpshrd_v16hi */
    case 5738:  /* vpshrd_v8di */
    case 5736:  /* vpshrd_v16si */
    case 5734:  /* vpshrd_v32hi */
    case 5726:  /* vgf2p8affineqb_v16qi */
    case 5724:  /* vgf2p8affineqb_v32qi */
    case 5722:  /* vgf2p8affineqb_v64qi */
    case 5720:  /* vgf2p8affineinvqb_v16qi */
    case 5718:  /* vgf2p8affineinvqb_v32qi */
    case 5716:  /* vgf2p8affineinvqb_v64qi */
    case 5681:  /* avx5124vnniw_vp4dpwssds */
    case 5678:  /* avx5124vnniw_vp4dpwssd */
    case 5675:  /* avx5124fmaddps_4fnmaddss */
    case 5672:  /* avx5124fmaddps_4fnmaddps */
    case 5669:  /* avx5124fmaddps_4fmaddss */
    case 5666:  /* avx5124fmaddps_4fmaddps */
    case 5650:  /* vpamdd52huqv2di */
    case 5648:  /* vpamdd52luqv2di */
    case 5646:  /* vpamdd52huqv4di */
    case 5644:  /* vpamdd52luqv4di */
    case 5642:  /* vpamdd52huqv8di */
    case 5640:  /* vpamdd52luqv8di */
    case 5633:  /* sha256rnds2 */
    case 5630:  /* sha1rnds4 */
    case 5601:  /* *avx512bw_dbpsadbwv32hi */
    case 5599:  /* *avx512bw_dbpsadbwv16hi */
    case 5597:  /* *avx512bw_dbpsadbwv8hi */
    case 5539:  /* avx512dq_rangepv2df */
    case 5537:  /* avx512dq_rangepv4df */
    case 5533:  /* avx512dq_rangepv8df */
    case 5531:  /* avx512dq_rangepv4sf */
    case 5529:  /* avx512dq_rangepv8sf */
    case 5525:  /* avx512dq_rangepv16sf */
    case 5524:  /* expandv8hi_mask */
    case 5523:  /* expandv16hi_mask */
    case 5522:  /* expandv32hi_mask */
    case 5521:  /* expandv32qi_mask */
    case 5520:  /* expandv16qi_mask */
    case 5519:  /* expandv64qi_mask */
    case 5518:  /* avx512vl_expandv2df_mask */
    case 5517:  /* avx512vl_expandv2di_mask */
    case 5516:  /* avx512vl_expandv4sf_mask */
    case 5515:  /* avx512vl_expandv4si_mask */
    case 5514:  /* avx512vl_expandv4df_mask */
    case 5513:  /* avx512vl_expandv4di_mask */
    case 5512:  /* avx512vl_expandv8sf_mask */
    case 5511:  /* avx512vl_expandv8si_mask */
    case 5510:  /* avx512f_expandv8df_mask */
    case 5509:  /* avx512f_expandv8di_mask */
    case 5508:  /* avx512f_expandv16sf_mask */
    case 5507:  /* avx512f_expandv16si_mask */
    case 5488:  /* compressv8hi_mask */
    case 5487:  /* compressv16hi_mask */
    case 5486:  /* compressv32hi_mask */
    case 5485:  /* compressv32qi_mask */
    case 5484:  /* compressv16qi_mask */
    case 5483:  /* compressv64qi_mask */
    case 5482:  /* avx512vl_compressv2df_mask */
    case 5481:  /* avx512vl_compressv2di_mask */
    case 5480:  /* avx512vl_compressv4sf_mask */
    case 5479:  /* avx512vl_compressv4si_mask */
    case 5478:  /* avx512vl_compressv4df_mask */
    case 5477:  /* avx512vl_compressv4di_mask */
    case 5476:  /* avx512vl_compressv8sf_mask */
    case 5475:  /* avx512vl_compressv8si_mask */
    case 5474:  /* avx512f_compressv8df_mask */
    case 5473:  /* avx512f_compressv8di_mask */
    case 5472:  /* avx512f_compressv16sf_mask */
    case 5471:  /* avx512f_compressv16si_mask */
    case 5123:  /* *avx_vperm2f128v4df_full */
    case 5122:  /* *avx_vperm2f128v8sf_full */
    case 5121:  /* *avx_vperm2f128v8si_full */
    case 5101:  /* avx512vl_vpermt2varv16qi3 */
    case 5099:  /* avx512vl_vpermt2varv32qi3 */
    case 5097:  /* avx512bw_vpermt2varv64qi3 */
    case 5095:  /* avx512vl_vpermt2varv8hi3 */
    case 5093:  /* avx512vl_vpermt2varv16hi3 */
    case 5091:  /* avx512bw_vpermt2varv32hi3 */
    case 5089:  /* avx512vl_vpermt2varv2df3 */
    case 5087:  /* avx512vl_vpermt2varv2di3 */
    case 5085:  /* avx512vl_vpermt2varv4sf3 */
    case 5083:  /* avx512vl_vpermt2varv4si3 */
    case 5081:  /* avx512vl_vpermt2varv4df3 */
    case 5079:  /* avx512vl_vpermt2varv4di3 */
    case 5077:  /* avx512vl_vpermt2varv8sf3 */
    case 5075:  /* avx512vl_vpermt2varv8si3 */
    case 5073:  /* avx512f_vpermt2varv8df3 */
    case 5071:  /* avx512f_vpermt2varv8di3 */
    case 5069:  /* avx512f_vpermt2varv16sf3 */
    case 5067:  /* avx512f_vpermt2varv16si3 */
    case 4896:  /* avx2_permv2ti */
    case 4825:  /* pclmulqdq */
    case 4814:  /* xop_pcom_tfv2di3 */
    case 4813:  /* xop_pcom_tfv4si3 */
    case 4812:  /* xop_pcom_tfv8hi3 */
    case 4811:  /* xop_pcom_tfv16qi3 */
    case 4767:  /* xop_pperm */
    case 4495:  /* sse4_1_pblendvb */
    case 4494:  /* avx2_pblendvb */
    case 4487:  /* sse4_1_mpsadbw */
    case 4486:  /* avx2_mpsadbw */
    case 4482:  /* sse4_1_dppd */
    case 4481:  /* avx_dppd256 */
    case 4480:  /* sse4_1_dpps */
    case 4479:  /* avx_dpps256 */
    case 4470:  /* sse4_1_blendvsd */
    case 4469:  /* sse4_1_blendvss */
    case 4468:  /* sse4_1_blendvpd */
    case 4467:  /* avx_blendvpd256 */
    case 4466:  /* sse4_1_blendvps */
    case 4465:  /* avx_blendvps256 */
    case 4457:  /* sse4a_extrqi */
    case 4425:  /* ssse3_palignrdi */
    case 4424:  /* ssse3_palignrti */
    case 4423:  /* avx2_palignrv2ti */
    case 4422:  /* avx512bw_palignrv4ti */
    case 3029:  /* *avx512vl_alignv2di */
    case 3027:  /* *avx512vl_alignv4di */
    case 3025:  /* *avx512f_alignv8di */
    case 3023:  /* *avx512vl_alignv4si */
    case 3021:  /* *avx512vl_alignv8si */
    case 3019:  /* *avx512f_alignv16si */
    case 2342:  /* *fma_fmaddsub_v2df */
    case 2340:  /* *fma_fmaddsub_v4df */
    case 2336:  /* *fma_fmaddsub_v8df */
    case 2335:  /* *fma_fmaddsub_df */
    case 2333:  /* *fma_fmaddsub_v4sf */
    case 2331:  /* *fma_fmaddsub_v8sf */
    case 2327:  /* *fma_fmaddsub_v16sf */
    case 2326:  /* *fma_fmaddsub_sf */
    case 2325:  /* *fma_fmaddsub_v2df */
    case 2324:  /* *fma_fmaddsub_v4df */
    case 2323:  /* *fma_fmaddsub_v4sf */
    case 2322:  /* *fma_fmaddsub_v8sf */
    case 1914:  /* avx512vl_ucmpv2di3 */
    case 1912:  /* avx512vl_ucmpv4di3 */
    case 1910:  /* avx512f_ucmpv8di3 */
    case 1908:  /* avx512vl_ucmpv4si3 */
    case 1906:  /* avx512vl_ucmpv8si3 */
    case 1904:  /* avx512f_ucmpv16si3 */
    case 1902:  /* avx512vl_ucmpv8hi3 */
    case 1900:  /* avx512vl_ucmpv16hi3 */
    case 1898:  /* avx512bw_ucmpv32hi3 */
    case 1896:  /* avx512vl_ucmpv32qi3 */
    case 1894:  /* avx512vl_ucmpv16qi3 */
    case 1892:  /* avx512bw_ucmpv64qi3 */
    case 1890:  /* avx512vl_cmpv8hi3 */
    case 1888:  /* avx512vl_cmpv16hi3 */
    case 1886:  /* avx512bw_cmpv32hi3 */
    case 1884:  /* avx512vl_cmpv32qi3 */
    case 1882:  /* avx512vl_cmpv16qi3 */
    case 1880:  /* avx512bw_cmpv64qi3 */
    case 1878:  /* avx512vl_cmpv2df3 */
    case 1876:  /* avx512vl_cmpv4df3 */
    case 1872:  /* avx512f_cmpv8df3 */
    case 1870:  /* avx512vl_cmpv4sf3 */
    case 1868:  /* avx512vl_cmpv8sf3 */
    case 1864:  /* avx512f_cmpv16sf3 */
    case 1862:  /* avx512vl_cmpv2di3 */
    case 1860:  /* avx512vl_cmpv4di3 */
    case 1856:  /* avx512f_cmpv8di3 */
    case 1854:  /* avx512vl_cmpv4si3 */
    case 1852:  /* avx512vl_cmpv8si3 */
    case 1848:  /* avx512f_cmpv16si3 */
    case 1835:  /* avx_cmpv2df3 */
    case 1834:  /* avx_cmpv4df3 */
    case 1833:  /* avx_cmpv4sf3 */
    case 1832:  /* avx_cmpv8sf3 */
    case 565:  /* xorsigndf3_1 */
    case 564:  /* xorsignsf3_1 */
    case 560:  /* copysigntf3_const */
    case 559:  /* copysigndf3_const */
    case 558:  /* copysignsf3_const */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 1477:  /* *nabsv2df2 */
    case 1476:  /* *nabsv4df2 */
    case 1475:  /* *nabsv8df2 */
    case 1474:  /* *nabsv4sf2 */
    case 1473:  /* *nabsv8sf2 */
    case 1472:  /* *nabsv16sf2 */
    case 551:  /* *nabsdf2_1 */
    case 550:  /* *nabssf2_1 */
    case 539:  /* *nabstf2_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 536:  /* *negvdi3 */
    case 535:  /* *negvsi3 */
    case 534:  /* *negvhi3 */
    case 533:  /* *negvqi3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 576:  /* *one_cmplsi2_2_zext */
    case 532:  /* *negsi2_cmpz_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 575:  /* *one_cmpldi2_2 */
    case 574:  /* *one_cmplsi2_2 */
    case 573:  /* *one_cmplhi2_2 */
    case 572:  /* *one_cmplqi2_2 */
    case 531:  /* *negdi2_cmpz */
    case 530:  /* *negsi2_cmpz */
    case 529:  /* *neghi2_cmpz */
    case 528:  /* *negqi2_cmpz */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 866:  /* *popcounthi2_1 */
    case 527:  /* *negsi2_1_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 507:  /* *xorsi_2_zext_imm */
    case 506:  /* *iorsi_2_zext_imm */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 475:  /* *andn_di_ccno */
    case 474:  /* *andn_si_ccno */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 1428:  /* kandndi */
    case 1427:  /* kandnsi */
    case 1426:  /* kandnhi */
    case 1425:  /* kandnqi */
    case 883:  /* *tls_local_dynamic_base_64_di */
    case 882:  /* *tls_local_dynamic_base_64_si */
    case 760:  /* *sibcall_value_memory */
    case 759:  /* *sibcall_value_memory */
    case 489:  /* *xorsi_1_zext_imm */
    case 488:  /* *iorsi_1_zext_imm */
    case 473:  /* *andnhi_1 */
    case 472:  /* *andnqi_1 */
    case 471:  /* *andndi_1 */
    case 470:  /* *andnsi_1 */
    case 469:  /* *andndi3_doubleword */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 520:  /* *xorqi_ext_1_cc */
    case 467:  /* *andqi_ext_1_cc */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 450:  /* *testqi_ext_3 */
    case 449:  /* *testqi_ext_3 */
    case 448:  /* *testqi_ext_3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 447:  /* *testqi_ext_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      break;

    case 446:  /* *testqi_ext_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 440:  /* udivmodhiqi3 */
    case 439:  /* divmodhiqi3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 438:  /* *udivmodsi4_noext_zext_2 */
    case 437:  /* *divmodsi4_noext_zext_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 436:  /* *udivmodsi4_noext_zext_1 */
    case 435:  /* *divmodsi4_noext_zext_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 434:  /* *udivmoddi4_noext */
    case 433:  /* *divmoddi4_noext */
    case 432:  /* *udivmodsi4_noext */
    case 431:  /* *divmodsi4_noext */
    case 430:  /* *udivmodhi4_noext */
    case 429:  /* *divmodhi4_noext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 428:  /* *udivmodsi4_pow2_zext_2 */
    case 427:  /* *udivmodsi4_zext_2 */
    case 426:  /* *divmodsi4_zext_2 */
    case 414:  /* udivmodsi4_zext_2 */
    case 413:  /* divmodsi4_zext_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 425:  /* *udivmodsi4_pow2_zext_1 */
    case 424:  /* *udivmodsi4_zext_1 */
    case 423:  /* *divmodsi4_zext_1 */
    case 412:  /* udivmodsi4_zext_1 */
    case 411:  /* divmodsi4_zext_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 422:  /* *udivmoddi4_pow2 */
    case 421:  /* *udivmodsi4_pow2 */
    case 420:  /* *udivmoddi4 */
    case 419:  /* *udivmodsi4 */
    case 418:  /* *udivmodhi4 */
    case 417:  /* *divmoddi4 */
    case 416:  /* *divmodsi4 */
    case 415:  /* *divmodhi4 */
    case 410:  /* udivmoddi4_1 */
    case 409:  /* udivmodsi4_1 */
    case 408:  /* divmoddi4_1 */
    case 407:  /* divmodsi4_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 404:  /* *umulsi3_highpart_zext */
    case 403:  /* *smulsi3_highpart_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 406:  /* *umulsi3_highpart_1 */
    case 405:  /* *smulsi3_highpart_1 */
    case 402:  /* *umuldi3_highpart_1 */
    case 401:  /* *smuldi3_highpart_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 400:  /* *umulqihi3_1 */
    case 399:  /* *mulqihi3_1 */
    case 398:  /* *mulditi3_1 */
    case 397:  /* *mulsidi3_1 */
    case 396:  /* *umulditi3_1 */
    case 395:  /* *umulsidi3_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 394:  /* *bmi2_umulditi3_1 */
    case 393:  /* *bmi2_umulsidi3_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 1), 0);
      recog_data.dup_num[1] = 3;
      break;

    case 390:  /* *umulvdi4 */
    case 389:  /* *umulvsi4 */
    case 388:  /* *umulvhi4 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1);
      recog_data.dup_num[3] = 2;
      break;

    case 376:  /* *subdi3_ne_0 */
    case 375:  /* *subsi3_ne_0 */
    case 374:  /* *subhi3_ne_0 */
    case 373:  /* *subqi3_ne_0 */
    case 372:  /* *subdi3_eq_0 */
    case 371:  /* *subsi3_eq_0 */
    case 370:  /* *subhi3_eq_0 */
    case 369:  /* *subqi3_eq_0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 368:  /* *subdi3_eq_1 */
    case 367:  /* *subsi3_eq_1 */
    case 366:  /* *subhi3_eq_1 */
    case 365:  /* *subqi3_eq_1 */
    case 364:  /* *subdi3_ne */
    case 363:  /* *subsi3_ne */
    case 362:  /* *subhi3_ne */
    case 361:  /* *subqi3_ne */
    case 360:  /* *subdi3_eq */
    case 359:  /* *subsi3_eq */
    case 358:  /* *subhi3_eq */
    case 357:  /* *subqi3_eq */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      break;

    case 356:  /* *adddi3_ne_0 */
    case 355:  /* *addsi3_ne_0 */
    case 354:  /* *addhi3_ne_0 */
    case 353:  /* *addqi3_ne_0 */
    case 352:  /* *adddi3_eq_0 */
    case 351:  /* *addsi3_eq_0 */
    case 350:  /* *addhi3_eq_0 */
    case 349:  /* *addqi3_eq_0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 348:  /* *adddi3_ne */
    case 347:  /* *addsi3_ne */
    case 346:  /* *addhi3_ne */
    case 345:  /* *addqi3_ne */
    case 344:  /* *adddi3_eq */
    case 343:  /* *addsi3_eq */
    case 342:  /* *addhi3_eq */
    case 341:  /* *addqi3_eq */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      break;

    case 338:  /* *addsi3_zext_cc_overflow_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[2] = 2;
      break;

    case 337:  /* *adddi3_cc_overflow_2 */
    case 336:  /* *addsi3_cc_overflow_2 */
    case 335:  /* *addhi3_cc_overflow_2 */
    case 334:  /* *addqi3_cc_overflow_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[2] = 2;
      break;

    case 333:  /* *adddi3_cconly_overflow_2 */
    case 332:  /* *addsi3_cconly_overflow_2 */
    case 331:  /* *addhi3_cconly_overflow_2 */
    case 330:  /* *addqi3_cconly_overflow_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 2;
      break;

    case 329:  /* *addsi3_zext_cc_overflow_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[2] = 1;
      break;

    case 340:  /* *addti3_doubleword_cc_overflow_1 */
    case 339:  /* *adddi3_doubleword_cc_overflow_1 */
    case 328:  /* *adddi3_cc_overflow_1 */
    case 327:  /* *addsi3_cc_overflow_1 */
    case 326:  /* *addhi3_cc_overflow_1 */
    case 325:  /* *addqi3_cc_overflow_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[2] = 1;
      break;

    case 324:  /* *adddi3_cconly_overflow_1 */
    case 323:  /* *addsi3_cconly_overflow_1 */
    case 322:  /* *addhi3_cconly_overflow_1 */
    case 321:  /* *addqi3_cconly_overflow_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 320:  /* subborrowdi */
    case 319:  /* subborrowsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[2] = 2;
      break;

    case 318:  /* subdi3_carry_ccgz */
    case 317:  /* subsi3_carry_ccgz */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      break;

    case 316:  /* *subdi3_carry_ccc_1 */
    case 315:  /* *subsi3_carry_ccc_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      break;

    case 314:  /* subdi3_carry_ccc */
    case 313:  /* subsi3_carry_ccc */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 0));
      break;

    case 311:  /* *subsi3_carry_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      break;

    case 310:  /* *subdi3_carry_0 */
    case 309:  /* *subsi3_carry_0 */
    case 308:  /* *subhi3_carry_0 */
    case 307:  /* *subqi3_carry_0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 306:  /* subdi3_carry */
    case 305:  /* subsi3_carry */
    case 304:  /* subhi3_carry */
    case 303:  /* subqi3_carry */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 302:  /* *addcarrydi_1 */
    case 301:  /* *addcarrysi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 0);
      recog_data.dup_num[4] = 3;
      break;

    case 300:  /* addcarrydi */
    case 299:  /* addcarrysi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0);
      recog_data.dup_num[4] = 2;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 0);
      recog_data.dup_num[5] = 3;
      break;

    case 298:  /* *addsi3_carry_zext_0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 297:  /* *addsi3_carry_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      break;

    case 296:  /* *adddi3_carry_0 */
    case 295:  /* *addsi3_carry_0 */
    case 294:  /* *addhi3_carry_0 */
    case 293:  /* *addqi3_carry_0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 292:  /* adddi3_carry */
    case 291:  /* addsi3_carry */
    case 290:  /* addhi3_carry */
    case 289:  /* addqi3_carry */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 288:  /* *subsi_3_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 287:  /* *subdi_3 */
    case 286:  /* *subsi_3 */
    case 285:  /* *subhi_3 */
    case 284:  /* *subqi_3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 283:  /* *subvdi4_overflow_2 */
    case 282:  /* *subvsi4_overflow_2 */
    case 281:  /* *subvhi4_overflow_2 */
    case 280:  /* *subvqi4_overflow_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1), 0);
      recog_data.dup_num[2] = 3;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 0);
      recog_data.dup_num[4] = 1;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 1), 0);
      recog_data.dup_num[5] = 3;
      break;

    case 279:  /* *subvdi4_overflow_1 */
    case 278:  /* *subvsi4_overflow_1 */
    case 277:  /* *subvhi4_overflow_1 */
    case 276:  /* *subvqi4_overflow_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1), 0);
      recog_data.dup_num[2] = 3;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 0);
      recog_data.dup_num[4] = 1;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 1), 0);
      recog_data.dup_num[5] = 3;
      recog_data.dup_loc[6] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1);
      recog_data.dup_num[6] = 2;
      break;

    case 241:  /* *leahi_general_3b */
    case 240:  /* *leaqi_general_3b */
    case 239:  /* *leahi_general_3 */
    case 238:  /* *leaqi_general_3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 4731:  /* xop_pmacssdd */
    case 4730:  /* xop_pmacsdd */
    case 4729:  /* xop_pmacssww */
    case 4728:  /* xop_pmacsww */
    case 249:  /* *leadi_general_4 */
    case 248:  /* *leadi_general_4 */
    case 247:  /* *leasi_general_4 */
    case 246:  /* *leasi_general_4 */
    case 245:  /* *leahi_general_4 */
    case 244:  /* *leahi_general_4 */
    case 243:  /* *leaqi_general_4 */
    case 242:  /* *leaqi_general_4 */
    case 237:  /* *leahi_general_2b */
    case 236:  /* *leaqi_general_2b */
    case 235:  /* *leahi_general_2 */
    case 234:  /* *leaqi_general_2 */
    case 233:  /* *leahi_general_1 */
    case 232:  /* *leaqi_general_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 231:  /* *addvdi4_overflow_2 */
    case 230:  /* *addvsi4_overflow_2 */
    case 229:  /* *addvhi4_overflow_2 */
    case 228:  /* *addvqi4_overflow_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[4] = 3;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 1);
      recog_data.dup_num[5] = 1;
      break;

    case 227:  /* *addvdi4_overflow_1 */
    case 226:  /* *addvsi4_overflow_1 */
    case 225:  /* *addvhi4_overflow_1 */
    case 224:  /* *addvqi4_overflow_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[4] = 3;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 1);
      recog_data.dup_num[5] = 1;
      recog_data.dup_loc[6] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1);
      recog_data.dup_num[6] = 2;
      break;

    case 387:  /* *mulvdi4_1 */
    case 386:  /* *mulvsi4_1 */
    case 385:  /* *mulvhi4_1 */
    case 275:  /* *subvti4_doubleword_1 */
    case 274:  /* *subvdi4_doubleword_1 */
    case 271:  /* subvdi4_1 */
    case 270:  /* subvsi4_1 */
    case 269:  /* subvhi4_1 */
    case 268:  /* subvqi4_1 */
    case 223:  /* *addvti4_doubleword_1 */
    case 222:  /* *addvdi4_doubleword_1 */
    case 219:  /* addvdi4_1 */
    case 218:  /* addvsi4_1 */
    case 217:  /* addvhi4_1 */
    case 216:  /* addvqi4_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      break;

    case 392:  /* *umulvqi4 */
    case 391:  /* *mulvqi4 */
    case 384:  /* *mulvhi4 */
    case 383:  /* *mulvdi4 */
    case 382:  /* *mulvsi4 */
    case 273:  /* *subvti4_doubleword */
    case 272:  /* *subvdi4_doubleword */
    case 267:  /* *subvdi4 */
    case 266:  /* *subvsi4 */
    case 265:  /* *subvhi4 */
    case 264:  /* *subvqi4 */
    case 221:  /* *addvti4_doubleword */
    case 220:  /* *addvdi4_doubleword */
    case 215:  /* *addvdi4 */
    case 214:  /* *addvsi4 */
    case 213:  /* *addvhi4 */
    case 212:  /* *addvqi4 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1);
      recog_data.dup_num[3] = 2;
      break;

    case 519:  /* *xorqi_ext_2 */
    case 518:  /* *iorqi_ext_2 */
    case 468:  /* *andqi_ext_2 */
    case 211:  /* *addqi_ext_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0), 0));
      break;

    case 517:  /* *xorqi_ext_1 */
    case 516:  /* *iorqi_ext_1 */
    case 466:  /* andqi_ext_1 */
    case 210:  /* addqi_ext_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 670:  /* *ashrdi3_cconly */
    case 669:  /* *lshrdi3_cconly */
    case 668:  /* *ashrsi3_cconly */
    case 667:  /* *lshrsi3_cconly */
    case 666:  /* *ashrhi3_cconly */
    case 665:  /* *lshrhi3_cconly */
    case 664:  /* *ashrqi3_cconly */
    case 663:  /* *lshrqi3_cconly */
    case 607:  /* *ashldi3_cconly */
    case 606:  /* *ashlsi3_cconly */
    case 605:  /* *ashlhi3_cconly */
    case 604:  /* *ashlqi3_cconly */
    case 515:  /* *xordi_3 */
    case 514:  /* *iordi_3 */
    case 513:  /* *xorsi_3 */
    case 512:  /* *iorsi_3 */
    case 511:  /* *xorhi_3 */
    case 510:  /* *iorhi_3 */
    case 509:  /* *xorqi_3 */
    case 508:  /* *iorqi_3 */
    case 209:  /* *adddi_5 */
    case 208:  /* *addsi_5 */
    case 207:  /* *addhi_5 */
    case 206:  /* *addqi_5 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 205:  /* *addsi_4 */
    case 204:  /* *addhi_4 */
    case 203:  /* *addqi_4 */
    case 202:  /* *adddi_4 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 201:  /* *addsi_3_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 200:  /* *adddi_3 */
    case 199:  /* *addsi_3 */
    case 198:  /* *addhi_3 */
    case 197:  /* *addqi_3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 662:  /* *ashrsi3_cmp_zext */
    case 661:  /* *lshrsi3_cmp_zext */
    case 603:  /* *ashlsi3_cmp_zext */
    case 505:  /* *xorsi_2_zext */
    case 504:  /* *iorsi_2_zext */
    case 461:  /* *andsi_2_zext */
    case 263:  /* *subsi_2_zext */
    case 196:  /* *addsi_2_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 660:  /* *ashrdi3_cmp */
    case 659:  /* *lshrdi3_cmp */
    case 658:  /* *ashrsi3_cmp */
    case 657:  /* *lshrsi3_cmp */
    case 656:  /* *ashrhi3_cmp */
    case 655:  /* *lshrhi3_cmp */
    case 654:  /* *ashrqi3_cmp */
    case 653:  /* *lshrqi3_cmp */
    case 602:  /* *ashldi3_cmp */
    case 601:  /* *ashlsi3_cmp */
    case 600:  /* *ashlhi3_cmp */
    case 599:  /* *ashlqi3_cmp */
    case 503:  /* *xordi_2 */
    case 502:  /* *iordi_2 */
    case 501:  /* *xorsi_2 */
    case 500:  /* *iorsi_2 */
    case 499:  /* *xorhi_2 */
    case 498:  /* *iorhi_2 */
    case 497:  /* *xorqi_2 */
    case 496:  /* *iorqi_2 */
    case 465:  /* *andsi_2 */
    case 464:  /* *andhi_2 */
    case 463:  /* *andqi_2 */
    case 462:  /* *andqi_2_maybe_si */
    case 460:  /* *anddi_2 */
    case 262:  /* *subdi_2 */
    case 261:  /* *subsi_2 */
    case 260:  /* *subhi_2 */
    case 259:  /* *subqi_2 */
    case 195:  /* *adddi_2 */
    case 194:  /* *addsi_2 */
    case 193:  /* *addhi_2 */
    case 192:  /* *addqi_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 699:  /* *rotrhi3_1_slp */
    case 698:  /* *rotlhi3_1_slp */
    case 697:  /* *rotrqi3_1_slp */
    case 696:  /* *rotlqi3_1_slp */
    case 652:  /* *ashrhi3_1_slp */
    case 651:  /* *lshrhi3_1_slp */
    case 650:  /* *ashrqi3_1_slp */
    case 649:  /* *lshrqi3_1_slp */
    case 598:  /* *ashlhi3_1_slp */
    case 597:  /* *ashlqi3_1_slp */
    case 495:  /* *xorhi_1_slp */
    case 494:  /* *iorhi_1_slp */
    case 493:  /* *xorqi_1_slp */
    case 492:  /* *iorqi_1_slp */
    case 459:  /* *andhi_1_slp */
    case 458:  /* *andqi_1_slp */
    case 258:  /* *subhi_1_slp */
    case 257:  /* *subqi_1_slp */
    case 191:  /* *addhi_1_slp */
    case 190:  /* *addqi_1_slp */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 1432:  /* kxnordi */
    case 1431:  /* kxnorsi */
    case 1430:  /* kxnorhi */
    case 1429:  /* kxnorqi */
    case 1026:  /* *x86_movdicc_0_m1_neg_leudi */
    case 1025:  /* *x86_movsicc_0_m1_neg_leudi */
    case 1024:  /* *x86_movdicc_0_m1_neg_leusi */
    case 1023:  /* *x86_movsicc_0_m1_neg_leusi */
    case 1022:  /* *x86_movdicc_0_m1_neg_leuhi */
    case 1021:  /* *x86_movsicc_0_m1_neg_leuhi */
    case 1020:  /* *x86_movdicc_0_m1_neg_leuqi */
    case 1019:  /* *x86_movsicc_0_m1_neg_leuqi */
    case 691:  /* *rotrsi3_1_zext */
    case 690:  /* *rotlsi3_1_zext */
    case 644:  /* *ashrsi3_1_zext */
    case 643:  /* *lshrsi3_1_zext */
    case 632:  /* *ashrsi3_cvt_zext */
    case 594:  /* *ashlsi3_1_zext */
    case 487:  /* *xorsi_1_zext */
    case 486:  /* *iorsi_1_zext */
    case 454:  /* *andsi_1_zext */
    case 380:  /* *mulsi3_1_zext */
    case 312:  /* *subsi3_carry_zext_0 */
    case 256:  /* *subsi_1_zext */
    case 187:  /* addsi_1_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 1448:  /* klshiftrtdi */
    case 1447:  /* kashiftdi */
    case 1446:  /* klshiftrtsi */
    case 1445:  /* kashiftsi */
    case 1444:  /* klshiftrthi */
    case 1443:  /* kashifthi */
    case 1442:  /* klshiftrtqi */
    case 1441:  /* kashiftqi */
    case 1440:  /* kadddi */
    case 1439:  /* kaddsi */
    case 1438:  /* kaddhi */
    case 1437:  /* kaddqi */
    case 1424:  /* kxordi */
    case 1423:  /* kiordi */
    case 1422:  /* kanddi */
    case 1421:  /* kxorsi */
    case 1420:  /* kiorsi */
    case 1419:  /* kandsi */
    case 1418:  /* kxorhi */
    case 1417:  /* kiorhi */
    case 1416:  /* kandhi */
    case 1415:  /* kxorqi */
    case 1414:  /* kiorqi */
    case 1413:  /* kandqi */
    case 1060:  /* pro_epilogue_adjust_stack_sub_di */
    case 1059:  /* pro_epilogue_adjust_stack_sub_si */
    case 1058:  /* pro_epilogue_adjust_stack_add_di */
    case 1057:  /* pro_epilogue_adjust_stack_add_si */
    case 1056:  /* *umindi3_doubleword */
    case 1055:  /* *umaxdi3_doubleword */
    case 1054:  /* *smindi3_doubleword */
    case 1053:  /* *smaxdi3_doubleword */
    case 1052:  /* *umindi3_1 */
    case 1051:  /* *umaxdi3_1 */
    case 1050:  /* *smindi3_1 */
    case 1049:  /* *smaxdi3_1 */
    case 1048:  /* *uminsi3_1 */
    case 1047:  /* *umaxsi3_1 */
    case 1046:  /* *sminsi3_1 */
    case 1045:  /* *smaxsi3_1 */
    case 695:  /* *rotrhi3_1 */
    case 694:  /* *rotlhi3_1 */
    case 693:  /* *rotrqi3_1 */
    case 692:  /* *rotlqi3_1 */
    case 688:  /* *rotrdi3_1 */
    case 687:  /* *rotldi3_1 */
    case 686:  /* *rotrsi3_1 */
    case 685:  /* *rotlsi3_1 */
    case 648:  /* *ashrhi3_1 */
    case 647:  /* *lshrhi3_1 */
    case 646:  /* *ashrqi3_1 */
    case 645:  /* *lshrqi3_1 */
    case 640:  /* *ashrdi3_1 */
    case 639:  /* *lshrdi3_1 */
    case 638:  /* *ashrsi3_1 */
    case 637:  /* *lshrsi3_1 */
    case 631:  /* ashrdi3_cvt */
    case 630:  /* ashrsi3_cvt */
    case 627:  /* *ashrti3_doubleword */
    case 626:  /* *lshrti3_doubleword */
    case 625:  /* *ashrdi3_doubleword */
    case 624:  /* *lshrdi3_doubleword */
    case 596:  /* *ashlqi3_1 */
    case 595:  /* *ashlhi3_1 */
    case 592:  /* *ashldi3_1 */
    case 591:  /* *ashlsi3_1 */
    case 582:  /* *ashlti3_doubleword */
    case 581:  /* *ashldi3_doubleword */
    case 491:  /* *xorqi_1 */
    case 490:  /* *iorqi_1 */
    case 485:  /* *xordi_1_btc */
    case 484:  /* *iordi_1_bts */
    case 483:  /* *xordi_1 */
    case 482:  /* *iordi_1 */
    case 481:  /* *xorsi_1 */
    case 480:  /* *iorsi_1 */
    case 479:  /* *xorhi_1 */
    case 478:  /* *iorhi_1 */
    case 477:  /* *xordi3_doubleword */
    case 476:  /* *iordi3_doubleword */
    case 457:  /* *andqi_1 */
    case 456:  /* *andsi_1 */
    case 455:  /* *andhi_1 */
    case 453:  /* *anddi_1_btr */
    case 452:  /* *anddi_1 */
    case 451:  /* *anddi3_doubleword */
    case 381:  /* *mulqi3_1 */
    case 379:  /* *muldi3_1 */
    case 378:  /* *mulsi3_1 */
    case 377:  /* *mulhi3_1 */
    case 255:  /* *subdi_1 */
    case 254:  /* *subsi_1 */
    case 253:  /* *subhi_1 */
    case 252:  /* *subqi_1 */
    case 251:  /* *subti3_doubleword */
    case 250:  /* *subdi3_doubleword */
    case 189:  /* *addqi_1 */
    case 188:  /* *addhi_1 */
    case 186:  /* *adddi_1 */
    case 185:  /* *addsi_1 */
    case 184:  /* *addti3_doubleword */
    case 183:  /* *adddi3_doubleword */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 4362:  /* sse_stmxcsr */
    case 1175:  /* rdpid_rex64 */
    case 1174:  /* rdpid */
    case 1147:  /* rdsspdi */
    case 1146:  /* rdsspsi */
    case 1132:  /* rdgsbasedi */
    case 1131:  /* rdfsbasedi */
    case 1130:  /* rdgsbasesi */
    case 1129:  /* rdfsbasesi */
    case 1124:  /* lwp_slwpcbdi_1 */
    case 1123:  /* lwp_slwpcbsi_1 */
    case 1119:  /* fnstsw */
    case 1092:  /* fxsave64 */
    case 1091:  /* fxsave */
    case 1087:  /* rdtsc */
    case 1073:  /* *prefetch_prefetchwt1 */
    case 935:  /* x86_fnstsw_1 */
    case 888:  /* *load_tp_x32_zext */
    case 887:  /* *load_tp_di */
    case 886:  /* *load_tp_si */
    case 778:  /* set_got_rex64 */
    case 159:  /* x86_fnstcw_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      break;

    case 180:  /* floatunssixf2_i387_with_xmm */
    case 179:  /* floatunssidf2_i387_with_xmm */
    case 178:  /* floatunssisf2_i387_with_xmm */
    case 158:  /* fix_truncsi_i387 */
    case 157:  /* fix_trunchi_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 173:  /* floatdixf2_i387_with_xmm */
    case 172:  /* floatdidf2_i387_with_xmm */
    case 171:  /* floatdisf2_i387_with_xmm */
    case 156:  /* fix_truncdi_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 1471:  /* *negv2df2 */
    case 1470:  /* *absv2df2 */
    case 1469:  /* *negv4df2 */
    case 1468:  /* *absv4df2 */
    case 1467:  /* *negv8df2 */
    case 1466:  /* *absv8df2 */
    case 1465:  /* *negv4sf2 */
    case 1464:  /* *absv4sf2 */
    case 1463:  /* *negv8sf2 */
    case 1462:  /* *absv8sf2 */
    case 1461:  /* *negv16sf2 */
    case 1460:  /* *absv16sf2 */
    case 785:  /* ffssi2_no_cmove */
    case 549:  /* *negdf2_1 */
    case 548:  /* *absdf2_1 */
    case 547:  /* *negsf2_1 */
    case 546:  /* *abssf2_1 */
    case 538:  /* *negtf2_1 */
    case 537:  /* *abstf2_1 */
    case 152:  /* fix_truncdi_i387_fisttp */
    case 151:  /* fix_truncsi_i387_fisttp */
    case 150:  /* fix_trunchi_i387_fisttp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 145:  /* *fixuns_truncdf_1 */
    case 144:  /* *fixuns_truncsf_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 124:  /* extendsidi2_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 1436:  /* knotdi */
    case 1435:  /* knotsi */
    case 1434:  /* knothi */
    case 1433:  /* knotqi */
    case 1018:  /* *x86_movdicc_0_m1_neg */
    case 1017:  /* *x86_movsicc_0_m1_neg */
    case 1016:  /* *x86_movdicc_0_m1_se */
    case 1015:  /* *x86_movsicc_0_m1_se */
    case 1014:  /* *x86_movdicc_0_m1 */
    case 1013:  /* *x86_movsicc_0_m1 */
    case 867:  /* popcounthi2 */
    case 861:  /* popcountdi2 */
    case 860:  /* popcountsi2 */
    case 799:  /* clzdi2_lzcnt */
    case 798:  /* clzsi2_lzcnt */
    case 793:  /* ctzdi2 */
    case 792:  /* ctzsi2 */
    case 545:  /* *negxf2_i387_1 */
    case 544:  /* *absxf2_i387_1 */
    case 543:  /* *negdf2_i387_1 */
    case 542:  /* *absdf2_i387_1 */
    case 541:  /* *negsf2_i387_1 */
    case 540:  /* *abssf2_i387_1 */
    case 526:  /* *negdi2_1 */
    case 525:  /* *negsi2_1 */
    case 524:  /* *neghi2_1 */
    case 523:  /* *negqi2_1 */
    case 522:  /* *negti2_doubleword */
    case 521:  /* *negdi2_doubleword */
    case 155:  /* *fix_truncdi_i387_1 */
    case 154:  /* *fix_truncsi_i387_1 */
    case 153:  /* *fix_trunchi_i387_1 */
    case 121:  /* zero_extendqihi2_and */
    case 118:  /* zero_extendhisi2_and */
    case 117:  /* zero_extendqisi2_and */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 739:  /* *indirect_jump */
    case 738:  /* *indirect_jump */
    case 104:  /* *pushxf_rounded */
    case 103:  /* *pushxf_rounded */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      break;

    case 101:  /* *insvqi_3 */
    case 100:  /* *insvqi_3 */
    case 99:  /* *insvqi_2 */
    case 98:  /* *insvqi_2 */
    case 97:  /* *insvqi_1 */
    case 93:  /* *insvqi_1_mem_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 5636:  /* avx512f_pd512_pd */
    case 5635:  /* avx512f_ps512_ps */
    case 5634:  /* avx512f_si512_si */
    case 5036:  /* avx512cd_maskw_vec_dupv4si */
    case 5035:  /* avx512cd_maskw_vec_dupv8si */
    case 5034:  /* avx512cd_maskw_vec_dupv16si */
    case 5033:  /* avx512cd_maskb_vec_dupv2di */
    case 5032:  /* avx512cd_maskb_vec_dupv4di */
    case 5031:  /* avx512cd_maskb_vec_dupv8di */
    case 5013:  /* *avx512dq_broadcastv8sf */
    case 5011:  /* *avx512dq_broadcastv16sf */
    case 5009:  /* *avx512dq_broadcastv4si */
    case 5007:  /* *avx512dq_broadcastv8si */
    case 5005:  /* *avx512dq_broadcastv16si */
    case 4936:  /* avx512vl_vec_dupv8hi */
    case 4934:  /* avx512vl_vec_dupv16hi */
    case 4932:  /* avx512bw_vec_dupv32hi */
    case 4930:  /* avx512vl_vec_dupv32qi */
    case 4928:  /* avx512vl_vec_dupv16qi */
    case 4926:  /* avx512bw_vec_dupv64qi */
    case 4924:  /* avx512vl_vec_dupv2df */
    case 4922:  /* avx512vl_vec_dupv4df */
    case 4920:  /* avx512f_vec_dupv8df */
    case 4918:  /* avx512vl_vec_dupv4sf */
    case 4916:  /* avx512vl_vec_dupv8sf */
    case 4914:  /* avx512f_vec_dupv16sf */
    case 4912:  /* avx512vl_vec_dupv2di */
    case 4910:  /* avx512vl_vec_dupv4di */
    case 4908:  /* avx512f_vec_dupv8di */
    case 4906:  /* avx512vl_vec_dupv4si */
    case 4904:  /* avx512vl_vec_dupv8si */
    case 4902:  /* avx512f_vec_dupv16si */
    case 4901:  /* avx512bw_vec_dupv64qi_1 */
    case 4900:  /* avx512bw_vec_dupv32hi_1 */
    case 4899:  /* avx512f_vec_dupv8di_1 */
    case 4898:  /* avx512f_vec_dupv16si_1 */
    case 4897:  /* avx2_vec_dupv4df */
    case 4844:  /* avx2_pbroadcastv4di_1 */
    case 4843:  /* avx2_pbroadcastv8si_1 */
    case 4842:  /* avx2_pbroadcastv16hi_1 */
    case 4841:  /* avx2_pbroadcastv32qi_1 */
    case 4840:  /* avx2_pbroadcastv2di */
    case 4839:  /* avx2_pbroadcastv4di */
    case 4838:  /* avx2_pbroadcastv4si */
    case 4837:  /* avx2_pbroadcastv8si */
    case 4836:  /* avx2_pbroadcastv8hi */
    case 4835:  /* avx2_pbroadcastv16hi */
    case 4834:  /* avx2_pbroadcastv32hi */
    case 4833:  /* avx2_pbroadcastv16qi */
    case 4832:  /* avx2_pbroadcastv32qi */
    case 4831:  /* avx2_pbroadcastv64qi */
    case 4830:  /* avx2_pbroadcastv8di */
    case 4829:  /* avx2_pbroadcastv16si */
    case 4637:  /* sse4_1_zero_extendv2siv2di2 */
    case 4635:  /* sse4_1_sign_extendv2siv2di2 */
    case 4617:  /* sse4_1_zero_extendv2hiv2di2 */
    case 4615:  /* sse4_1_sign_extendv2hiv2di2 */
    case 4605:  /* avx2_zero_extendv4hiv4di2 */
    case 4603:  /* avx2_sign_extendv4hiv4di2 */
    case 4597:  /* sse4_1_zero_extendv2qiv2di2 */
    case 4595:  /* sse4_1_sign_extendv2qiv2di2 */
    case 4585:  /* avx2_zero_extendv4qiv4di2 */
    case 4583:  /* avx2_sign_extendv4qiv4di2 */
    case 4573:  /* avx512f_zero_extendv8qiv8di2 */
    case 4571:  /* avx512f_sign_extendv8qiv8di2 */
    case 4561:  /* sse4_1_zero_extendv4hiv4si2 */
    case 4559:  /* sse4_1_sign_extendv4hiv4si2 */
    case 4541:  /* sse4_1_zero_extendv4qiv4si2 */
    case 4539:  /* sse4_1_sign_extendv4qiv4si2 */
    case 4529:  /* avx2_zero_extendv8qiv8si2 */
    case 4527:  /* avx2_sign_extendv8qiv8si2 */
    case 4513:  /* sse4_1_zero_extendv8qiv8hi2 */
    case 4511:  /* sse4_1_sign_extendv8qiv8hi2 */
    case 4282:  /* *vec_extractv4si_0_zext */
    case 4281:  /* *vec_extractv4si_0_zext_sse4 */
    case 3333:  /* *avx512f_us_truncatev8div16qi2 */
    case 3332:  /* *avx512f_truncatev8div16qi2 */
    case 3331:  /* *avx512f_ss_truncatev8div16qi2 */
    case 2846:  /* avx512f_vec_dupv8df_1 */
    case 2845:  /* avx512f_vec_dupv16sf_1 */
    case 2844:  /* avx2_vec_dupv8sf_1 */
    case 2843:  /* avx2_vec_dupv4sf */
    case 2842:  /* avx2_vec_dupv8sf */
    case 2804:  /* sse2_cvtps2pd */
    case 2779:  /* vec_unpacks_lo_v16sf */
    case 2778:  /* *avx_cvtps2pd256_2 */
    case 2754:  /* sse2_cvttpd2dq */
    case 2748:  /* fixuns_truncv2sfv2di2 */
    case 2746:  /* fix_truncv2sfv2di2 */
    case 2695:  /* ufix_truncv2dfv2si2 */
    case 2664:  /* sse2_cvtdq2pd */
    case 2663:  /* avx_cvtdq2pd256_2 */
    case 2662:  /* avx512f_cvtdq2pd512_2 */
    case 2660:  /* ufloatv2siv2df2 */
    case 2608:  /* sse2_cvttsd2siq */
    case 2606:  /* sse2_cvttsd2si */
    case 2598:  /* avx512f_vcvttsd2usiq */
    case 2596:  /* avx512f_vcvttsd2usi */
    case 2590:  /* avx512f_vcvttss2usiq */
    case 2588:  /* avx512f_vcvttss2usi */
    case 2501:  /* sse_cvttss2siq */
    case 2499:  /* sse_cvttss2si */
    case 2488:  /* sse_cvttps2pi */
    case 1398:  /* sse2_movq128 */
    case 1307:  /* *vec_extractv2si_1_zext */
    case 1305:  /* *vec_extractv2si_0_zext */
    case 1304:  /* *vec_extractv2si_0_zext_sse4 */
    case 1300:  /* *vec_dupv4hi */
    case 570:  /* *one_cmplsi2_1_zext */
    case 143:  /* *fixuns_truncdfsi2_avx512f_zext */
    case 142:  /* *fixuns_truncsfsi2_avx512f_zext */
    case 130:  /* *extendqisi2_zext */
    case 128:  /* *extendhisi2_zext */
    case 92:  /* *extzvqi */
    case 88:  /* *extzvqi_mem_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 749:  /* *sibcall_memory */
    case 748:  /* *sibcall_memory */
    case 85:  /* *movstricthi_xor */
    case 84:  /* *movstrictqi_xor */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 113:  /* *swapxf */
    case 81:  /* *swaphi */
    case 80:  /* *swapqi */
    case 79:  /* *swapdi */
    case 78:  /* *swapsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 1);
      recog_data.dup_num[1] = 0;
      break;

    case 5714:  /* vpopcountv8hi */
    case 5712:  /* vpopcountv16hi */
    case 5710:  /* vpopcountv32hi */
    case 5708:  /* vpopcountv32qi */
    case 5706:  /* vpopcountv16qi */
    case 5704:  /* vpopcountv64qi */
    case 5694:  /* vpopcountv2di */
    case 5692:  /* vpopcountv4di */
    case 5690:  /* vpopcountv8di */
    case 5688:  /* vpopcountv4si */
    case 5686:  /* vpopcountv8si */
    case 5684:  /* vpopcountv16si */
    case 5639:  /* avx512f_pd512_256pd */
    case 5638:  /* avx512f_ps512_256ps */
    case 5637:  /* avx512f_si512_256si */
    case 5613:  /* clzv2di2 */
    case 5611:  /* clzv4di2 */
    case 5609:  /* clzv8di2 */
    case 5607:  /* clzv4si2 */
    case 5605:  /* clzv8si2 */
    case 5603:  /* clzv16si2 */
    case 5171:  /* avx_pd256_pd */
    case 5170:  /* avx_ps256_ps */
    case 5169:  /* avx_si256_si */
    case 5029:  /* *avx512dq_broadcastv4df_1 */
    case 5027:  /* *avx512dq_broadcastv4di_1 */
    case 5025:  /* *avx512dq_broadcastv8df_1 */
    case 5023:  /* *avx512dq_broadcastv8di_1 */
    case 5021:  /* *avx512dq_broadcastv16si_1 */
    case 5019:  /* *avx512dq_broadcastv16sf_1 */
    case 5017:  /* *avx512vl_broadcastv8sf_1 */
    case 5015:  /* *avx512vl_broadcastv8si_1 */
    case 4998:  /* vec_dupv4df */
    case 4997:  /* vec_dupv4di */
    case 4996:  /* vec_dupv8sf */
    case 4995:  /* vec_dupv8si */
    case 4994:  /* *vec_dupv4si */
    case 4993:  /* *vec_dupv8si */
    case 4992:  /* *vec_dupv8hi */
    case 4991:  /* *vec_dupv16hi */
    case 4990:  /* *vec_dupv16qi */
    case 4989:  /* *vec_dupv32qi */
    case 4984:  /* *vec_dupv2di */
    case 4983:  /* *vec_dupv4si */
    case 4982:  /* vec_dupv4sf */
    case 4980:  /* *avx512vl_vec_dup_gprv2df */
    case 4978:  /* *avx512vl_vec_dup_gprv4df */
    case 4976:  /* *avx512f_vec_dup_gprv8df */
    case 4974:  /* *avx512vl_vec_dup_gprv4sf */
    case 4972:  /* *avx512vl_vec_dup_gprv8sf */
    case 4970:  /* *avx512f_vec_dup_gprv16sf */
    case 4968:  /* *avx512vl_vec_dup_gprv2di */
    case 4966:  /* *avx512vl_vec_dup_gprv4di */
    case 4964:  /* *avx512f_vec_dup_gprv8di */
    case 4962:  /* *avx512vl_vec_dup_gprv4si */
    case 4960:  /* *avx512vl_vec_dup_gprv8si */
    case 4958:  /* *avx512f_vec_dup_gprv16si */
    case 4956:  /* *avx512vl_vec_dup_gprv8hi */
    case 4954:  /* *avx512vl_vec_dup_gprv16hi */
    case 4952:  /* *avx512bw_vec_dup_gprv32hi */
    case 4950:  /* *avx512vl_vec_dup_gprv32qi */
    case 4948:  /* *avx512vl_vec_dup_gprv16qi */
    case 4946:  /* *avx512bw_vec_dup_gprv64qi */
    case 4944:  /* *avx512f_broadcastv8di */
    case 4942:  /* *avx512f_broadcastv8df */
    case 4940:  /* *avx512f_broadcastv16si */
    case 4938:  /* *avx512f_broadcastv16sf */
    case 4641:  /* *sse4_1_zero_extendv2siv2di2_1 */
    case 4639:  /* *sse4_1_sign_extendv2siv2di2_1 */
    case 4633:  /* avx2_zero_extendv4siv4di2 */
    case 4631:  /* avx2_sign_extendv4siv4di2 */
    case 4629:  /* avx512f_zero_extendv8siv8di2 */
    case 4627:  /* avx512f_sign_extendv8siv8di2 */
    case 4621:  /* *sse4_1_zero_extendv2hiv2di2_1 */
    case 4619:  /* *sse4_1_sign_extendv2hiv2di2_1 */
    case 4609:  /* *avx2_zero_extendv4hiv4di2_1 */
    case 4607:  /* *avx2_sign_extendv4hiv4di2_1 */
    case 4601:  /* avx512f_zero_extendv8hiv8di2 */
    case 4599:  /* avx512f_sign_extendv8hiv8di2 */
    case 4589:  /* *avx2_zero_extendv4qiv4di2_1 */
    case 4587:  /* *avx2_sign_extendv4qiv4di2_1 */
    case 4577:  /* *avx512f_zero_extendv8qiv8di2_1 */
    case 4575:  /* *avx512f_sign_extendv8qiv8di2_1 */
    case 4565:  /* *sse4_1_zero_extendv4hiv4si2_1 */
    case 4563:  /* *sse4_1_sign_extendv4hiv4si2_1 */
    case 4557:  /* avx2_zero_extendv8hiv8si2 */
    case 4555:  /* avx2_sign_extendv8hiv8si2 */
    case 4553:  /* avx512f_zero_extendv16hiv16si2 */
    case 4551:  /* avx512f_sign_extendv16hiv16si2 */
    case 4545:  /* *sse4_1_zero_extendv4qiv4si2_1 */
    case 4543:  /* *sse4_1_sign_extendv4qiv4si2_1 */
    case 4533:  /* *avx2_zero_extendv8qiv8si2_1 */
    case 4531:  /* *avx2_sign_extendv8qiv8si2_1 */
    case 4525:  /* *avx512f_zero_extendv16qiv16si2 */
    case 4523:  /* *avx512f_sign_extendv16qiv16si2 */
    case 4517:  /* *sse4_1_zero_extendv8qiv8hi2_1 */
    case 4515:  /* *sse4_1_sign_extendv8qiv8hi2_1 */
    case 4509:  /* avx512bw_zero_extendv32qiv32hi2 */
    case 4507:  /* avx512bw_sign_extendv32qiv32hi2 */
    case 4505:  /* avx2_zero_extendv16qiv16hi2 */
    case 4503:  /* avx2_sign_extendv16qiv16hi2 */
    case 4452:  /* ssse3_absv2si2 */
    case 4451:  /* ssse3_absv4hi2 */
    case 4450:  /* ssse3_absv8qi2 */
    case 4437:  /* *absv2di2 */
    case 4436:  /* *absv4di2 */
    case 4435:  /* *absv8di2 */
    case 4434:  /* *absv4si2 */
    case 4433:  /* *absv8si2 */
    case 4432:  /* *absv16si2 */
    case 4431:  /* *absv8hi2 */
    case 4430:  /* *absv16hi2 */
    case 4429:  /* *absv32hi2 */
    case 4428:  /* *absv16qi2 */
    case 4427:  /* *absv32qi2 */
    case 4426:  /* *absv64qi2 */
    case 4287:  /* *vec_extractv2di_1 */
    case 4280:  /* *vec_extractv2di_0_sse */
    case 4279:  /* *vec_extractv2di_0 */
    case 4278:  /* *vec_extractv4si_0 */
    case 3186:  /* *avx512vl_us_truncatev16hiv16qi2 */
    case 3185:  /* *avx512vl_truncatev16hiv16qi2 */
    case 3184:  /* *avx512vl_ss_truncatev16hiv16qi2 */
    case 3183:  /* *avx512vl_us_truncatev8siv8hi2 */
    case 3182:  /* *avx512vl_truncatev8siv8hi2 */
    case 3181:  /* *avx512vl_ss_truncatev8siv8hi2 */
    case 3180:  /* *avx512vl_us_truncatev4div4si2 */
    case 3179:  /* *avx512vl_truncatev4div4si2 */
    case 3178:  /* *avx512vl_ss_truncatev4div4si2 */
    case 3174:  /* avx512bw_us_truncatev32hiv32qi2 */
    case 3173:  /* avx512bw_truncatev32hiv32qi2 */
    case 3172:  /* avx512bw_ss_truncatev32hiv32qi2 */
    case 3159:  /* *avx512f_us_truncatev8div8hi2 */
    case 3158:  /* *avx512f_truncatev8div8hi2 */
    case 3157:  /* *avx512f_ss_truncatev8div8hi2 */
    case 3156:  /* *avx512f_us_truncatev8div8si2 */
    case 3155:  /* *avx512f_truncatev8div8si2 */
    case 3154:  /* *avx512f_ss_truncatev8div8si2 */
    case 3153:  /* *avx512f_us_truncatev16siv16hi2 */
    case 3152:  /* *avx512f_truncatev16siv16hi2 */
    case 3151:  /* *avx512f_ss_truncatev16siv16hi2 */
    case 3150:  /* *avx512f_us_truncatev16siv16qi2 */
    case 3149:  /* *avx512f_truncatev16siv16qi2 */
    case 3148:  /* *avx512f_ss_truncatev16siv16qi2 */
    case 3143:  /* vec_dupv2df */
    case 3139:  /* *vec_extractv2df_0_sse */
    case 3138:  /* sse2_storelpd */
    case 3137:  /* *vec_extractv2df_1_sse */
    case 3136:  /* sse2_storehpd */
    case 2924:  /* vec_extract_hi_v32qi */
    case 2923:  /* vec_extract_lo_v32qi */
    case 2922:  /* vec_extract_hi_v64qi */
    case 2921:  /* vec_extract_lo_v64qi */
    case 2920:  /* vec_extract_hi_v16hi */
    case 2919:  /* vec_extract_lo_v16hi */
    case 2918:  /* vec_extract_hi_v32hi */
    case 2917:  /* vec_extract_lo_v32hi */
    case 2916:  /* vec_extract_hi_v8sf */
    case 2915:  /* vec_extract_hi_v8si */
    case 2907:  /* vec_extract_lo_v8sf */
    case 2905:  /* vec_extract_lo_v8si */
    case 2903:  /* vec_extract_hi_v4df */
    case 2901:  /* vec_extract_hi_v4di */
    case 2899:  /* vec_extract_lo_v4df */
    case 2897:  /* vec_extract_lo_v4di */
    case 2895:  /* vec_extract_lo_v16si */
    case 2893:  /* vec_extract_lo_v16sf */
    case 2891:  /* vec_extract_hi_v16si */
    case 2889:  /* vec_extract_hi_v16sf */
    case 2885:  /* vec_extract_hi_v8di */
    case 2883:  /* vec_extract_hi_v8df */
    case 2879:  /* vec_extract_lo_v8di */
    case 2877:  /* vec_extract_lo_v8df */
    case 2860:  /* *vec_extractv4sf_0 */
    case 2839:  /* sse_storelps */
    case 2837:  /* sse_storehps */
    case 2776:  /* avx_cvtps2pd256 */
    case 2772:  /* avx512f_cvtps2pd512 */
    case 2767:  /* avx_cvtpd2ps256 */
    case 2763:  /* *avx512f_cvtpd2ps512 */
    case 2752:  /* ufix_truncv4sfv4si2 */
    case 2750:  /* ufix_truncv8sfv8si2 */
    case 2744:  /* fixuns_truncv4sfv4di2 */
    case 2742:  /* fix_truncv4sfv4di2 */
    case 2738:  /* fixuns_truncv8sfv8di2 */
    case 2734:  /* fix_truncv8sfv8di2 */
    case 2716:  /* fixuns_truncv2dfv2di2 */
    case 2714:  /* fix_truncv2dfv2di2 */
    case 2712:  /* fixuns_truncv4dfv4di2 */
    case 2710:  /* fix_truncv4dfv4di2 */
    case 2706:  /* fixuns_truncv8dfv8di2 */
    case 2702:  /* fix_truncv8dfv8di2 */
    case 2700:  /* ufix_truncv4dfv4si2 */
    case 2698:  /* fix_truncv4dfv4si2 */
    case 2691:  /* fixuns_truncv8dfv8si2 */
    case 2687:  /* fix_truncv8dfv8si2 */
    case 2658:  /* ufloatv4siv4df2 */
    case 2656:  /* ufloatv8siv8df2 */
    case 2648:  /* floatunsv4div4sf2 */
    case 2646:  /* floatv4div4sf2 */
    case 2642:  /* floatunsv8div8sf2 */
    case 2638:  /* floatv8div8sf2 */
    case 2634:  /* floatunsv2div2df2 */
    case 2630:  /* floatv2div2df2 */
    case 2626:  /* floatunsv4div4df2 */
    case 2622:  /* floatv4div4df2 */
    case 2618:  /* floatunsv8div8df2 */
    case 2614:  /* floatv8div8df2 */
    case 2612:  /* floatv4siv4df2 */
    case 2610:  /* floatv8siv8df2 */
    case 2580:  /* sse2_cvttpd2pi */
    case 2578:  /* sse2_cvtpi2pd */
    case 2576:  /* fix_truncv4sfv4si2 */
    case 2574:  /* fix_truncv8sfv8si2 */
    case 2570:  /* ufix_truncv16sfv16si2 */
    case 2566:  /* fix_truncv16sfv16si2 */
    case 2526:  /* ufloatv4siv4sf2 */
    case 2522:  /* ufloatv8siv8sf2 */
    case 2518:  /* ufloatv16siv16sf2 */
    case 2516:  /* floatv4siv4sf2 */
    case 2514:  /* floatv8siv8sf2 */
    case 2510:  /* floatv16siv16sf2 */
    case 1680:  /* sse2_sqrtv2df2 */
    case 1678:  /* avx_sqrtv4df2 */
    case 1674:  /* avx512f_sqrtv8df2 */
    case 1672:  /* sse_sqrtv4sf2 */
    case 1670:  /* avx_sqrtv8sf2 */
    case 1666:  /* avx512f_sqrtv16sf2 */
    case 1306:  /* *vec_extractv2si_1 */
    case 1303:  /* *vec_extractv2si_0 */
    case 1301:  /* *vec_dupv2si */
    case 1299:  /* mmx_pswapdv2si2 */
    case 1226:  /* *vec_extractv2sf_1 */
    case 1225:  /* *vec_extractv2sf_0 */
    case 1223:  /* *vec_dupv2sf */
    case 1222:  /* mmx_pswapdv2sf2 */
    case 1221:  /* mmx_floatv2si2 */
    case 1218:  /* mmx_pf2id */
    case 934:  /* *sqrtdf2_sse */
    case 933:  /* *sqrtsf2_sse */
    case 931:  /* sqrtxf2 */
    case 872:  /* *bswaphi2_movbe */
    case 871:  /* *bswapdi2 */
    case 870:  /* *bswapsi2 */
    case 869:  /* *bswapdi2_movbe */
    case 868:  /* *bswapsi2_movbe */
    case 571:  /* *one_cmplqi2_1 */
    case 569:  /* *one_cmpldi2_1 */
    case 568:  /* *one_cmplsi2_1 */
    case 567:  /* *one_cmplhi2_1 */
    case 566:  /* *one_cmpldi2_doubleword */
    case 557:  /* *negxf2_i387 */
    case 556:  /* *absxf2_i387 */
    case 555:  /* *negdf2_i387 */
    case 554:  /* *absdf2_i387 */
    case 553:  /* *negsf2_i387 */
    case 552:  /* *abssf2_i387 */
    case 177:  /* *floatunsdidf2_avx512 */
    case 176:  /* *floatunssidf2_avx512 */
    case 175:  /* *floatunsdisf2_avx512 */
    case 174:  /* *floatunssisf2_avx512 */
    case 170:  /* *floatdidf2_i387 */
    case 169:  /* *floatdisf2_i387 */
    case 168:  /* *floatdidf2 */
    case 167:  /* *floatsidf2 */
    case 166:  /* *floatdisf2 */
    case 165:  /* *floatsisf2 */
    case 164:  /* floatdixf2 */
    case 163:  /* floatsixf2 */
    case 162:  /* floathixf2 */
    case 161:  /* floathidf2 */
    case 160:  /* floathisf2 */
    case 149:  /* fix_truncdfdi_sse */
    case 148:  /* fix_truncdfsi_sse */
    case 147:  /* fix_truncsfdi_sse */
    case 146:  /* fix_truncsfsi_sse */
    case 141:  /* fixuns_truncdfsi2_avx512f */
    case 140:  /* fixuns_truncsfsi2_avx512f */
    case 139:  /* fixuns_truncdfdi2 */
    case 138:  /* fixuns_truncsfdi2 */
    case 137:  /* truncxfdf2 */
    case 136:  /* truncxfsf2 */
    case 135:  /* truncdfsf2 */
    case 134:  /* *extenddfxf2_i387 */
    case 133:  /* *extendsfxf2_i387 */
    case 132:  /* *extendsfdf2 */
    case 131:  /* extendqihi2 */
    case 129:  /* extendqisi2 */
    case 127:  /* extendhisi2 */
    case 126:  /* extendhidi2 */
    case 125:  /* extendqidi2 */
    case 123:  /* *extendsidi2_rex64 */
    case 122:  /* *zero_extendqihi2 */
    case 120:  /* *zero_extendhisi2 */
    case 119:  /* *zero_extendqisi2 */
    case 116:  /* zero_extendhidi2 */
    case 115:  /* zero_extendqidi2 */
    case 114:  /* *zero_extendsidi2 */
    case 91:  /* *extzvdi */
    case 90:  /* *extzvsi */
    case 89:  /* *extzvhi */
    case 87:  /* *extvsi */
    case 86:  /* *extvhi */
    case 77:  /* *movabsdi_2 */
    case 76:  /* *movabssi_2 */
    case 75:  /* *movabshi_2 */
    case 74:  /* *movabsqi_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 747:  /* *sibcall */
    case 746:  /* *sibcall */
    case 743:  /* *call */
    case 742:  /* *call */
    case 733:  /* *setcc_qi_slp */
    case 96:  /* insvdi_1 */
    case 95:  /* insvsi_1 */
    case 94:  /* insvhi_1 */
    case 83:  /* *movstricthi_1 */
    case 82:  /* *movstrictqi_1 */
    case 73:  /* *movabsdi_1 */
    case 72:  /* *movabssi_1 */
    case 71:  /* *movabshi_1 */
    case 70:  /* *movabsqi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      break;

    case 730:  /* *setcc_si_1_and */
    case 62:  /* *movdi_or */
    case 61:  /* *movsi_or */
    case 60:  /* *movdi_xor */
    case 59:  /* *movsi_xor */
    case 54:  /* *popdi1_epilogue */
    case 53:  /* *popsi1_epilogue */
    case 50:  /* *pushdi2_prologue */
    case 49:  /* *pushsi2_prologue */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 5882:  /* *movp2hi_internal */
    case 5881:  /* *movp2qi_internal */
    case 5665:  /* *movv64si_internal */
    case 5664:  /* *movv64sf_internal */
    case 1337:  /* movv2df_internal */
    case 1336:  /* movv4df_internal */
    case 1335:  /* movv8df_internal */
    case 1334:  /* movv4sf_internal */
    case 1333:  /* movv8sf_internal */
    case 1332:  /* movv16sf_internal */
    case 1331:  /* movv1ti_internal */
    case 1330:  /* movv2ti_internal */
    case 1329:  /* movv4ti_internal */
    case 1328:  /* movv2di_internal */
    case 1327:  /* movv4di_internal */
    case 1326:  /* movv8di_internal */
    case 1325:  /* movv4si_internal */
    case 1324:  /* movv8si_internal */
    case 1323:  /* movv16si_internal */
    case 1322:  /* movv8hi_internal */
    case 1321:  /* movv16hi_internal */
    case 1320:  /* movv32hi_internal */
    case 1319:  /* movv16qi_internal */
    case 1318:  /* movv32qi_internal */
    case 1317:  /* movv64qi_internal */
    case 1198:  /* *movv2sf_internal */
    case 1197:  /* *movv1di_internal */
    case 1196:  /* *movv2si_internal */
    case 1195:  /* *movv4hi_internal */
    case 1194:  /* *movv8qi_internal */
    case 1072:  /* *prefetch_3dnow */
    case 732:  /* *setcc_qi */
    case 731:  /* *setcc_si_1_movzbl */
    case 729:  /* *setcc_di_1 */
    case 182:  /* *leadi */
    case 181:  /* *leasi */
    case 112:  /* *movsf_internal */
    case 111:  /* *movdf_internal */
    case 110:  /* *movxf_internal */
    case 109:  /* *movtf_internal */
    case 108:  /* *pushsf */
    case 107:  /* *pushsf_rex64 */
    case 106:  /* *pushdf */
    case 105:  /* *pushxf */
    case 102:  /* *pushtf */
    case 69:  /* *movqi_internal */
    case 68:  /* *movhi_internal */
    case 67:  /* *movsi_internal */
    case 66:  /* *movdi_internal */
    case 65:  /* *movti_internal */
    case 64:  /* *movoi_internal_avx */
    case 63:  /* *movxi_internal_avx512f */
    case 58:  /* *popfldi1 */
    case 57:  /* *popflsi1 */
    case 56:  /* *pushfldi2 */
    case 55:  /* *pushflsi2 */
    case 52:  /* *popdi1 */
    case 51:  /* *popsi1 */
    case 48:  /* *pushhi2 */
    case 47:  /* *pushqi2 */
    case 46:  /* *pushsi2_rex64 */
    case 45:  /* *pushhi2_rex64 */
    case 44:  /* *pushqi2_rex64 */
    case 43:  /* *pushsi2 */
    case 42:  /* *pushdi2_rex64 */
    case 41:  /* *pushti2 */
    case 40:  /* *pushdi2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      break;

    case 39:  /* *cmpiudf */
    case 37:  /* *cmpiusf */
    case 35:  /* *cmpiuxf_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      break;

    case 33:  /* x86_sahf_1 */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 32:  /* *cmpuxf_i387 */
    case 31:  /* *cmpudf_i387 */
    case 30:  /* *cmpusf_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 0), 1));
      break;

    case 29:  /* *cmpxf_si_i387 */
    case 28:  /* *cmpdf_si_i387 */
    case 27:  /* *cmpsf_si_i387 */
    case 26:  /* *cmpxf_hi_i387 */
    case 25:  /* *cmpdf_hi_i387 */
    case 24:  /* *cmpsf_hi_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      break;

    case 4355:  /* *sse2_pmovmskb_lt */
    case 4354:  /* *avx2_pmovmskb_lt */
    case 4328:  /* *sse2_movmskpd_lt */
    case 4327:  /* *avx_movmskpd256_lt */
    case 4326:  /* *sse_movmskps_lt */
    case 4325:  /* *avx_movmskps256_lt */
    case 23:  /* *cmpdf_i387 */
    case 22:  /* *cmpsf_i387 */
    case 21:  /* *cmpxf_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      break;

    case 20:  /* *cmpqi_ext_4 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      break;

    case 19:  /* *cmpqi_ext_3 */
    case 18:  /* *cmpqi_ext_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 17:  /* *cmpqi_ext_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      break;

    case 445:  /* *testsi_1 */
    case 444:  /* *testhi_1 */
    case 443:  /* *testqi_1 */
    case 442:  /* *testqi_1_maybe_si */
    case 441:  /* *testdi_1 */
    case 16:  /* *cmpdi_minus_1 */
    case 15:  /* *cmpsi_minus_1 */
    case 14:  /* *cmphi_minus_1 */
    case 13:  /* *cmpqi_minus_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 38:  /* *cmpidf */
    case 36:  /* *cmpisf */
    case 34:  /* *cmpixf_i387 */
    case 12:  /* *cmpdi_1 */
    case 11:  /* *cmpsi_1 */
    case 10:  /* *cmphi_1 */
    case 9:  /* *cmpqi_1 */
    case 8:  /* *cmpdi_ccno_1 */
    case 7:  /* *cmpsi_ccno_1 */
    case 6:  /* *cmphi_ccno_1 */
    case 5:  /* *cmpqi_ccno_1 */
    case 4:  /* *cmpdi_ccz_1 */
    case 3:  /* *cmpsi_ccz_1 */
    case 2:  /* *cmphi_ccz_1 */
    case 1:  /* *cmpqi_ccz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      break;

    }
}
