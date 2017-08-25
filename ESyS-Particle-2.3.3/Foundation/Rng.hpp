/////////////////////////////////////////////////////////////
//                                                         //
// Copyright (c) 2003-2014 by The University of Queensland //
// Centre for Geoscience Computing                         //
// http://earth.uq.edu.au/centre-geoscience-computing      //
//                                                         //
// Primary Business: Brisbane, Queensland, Australia       //
// Licensed under the Open Software License version 3.0    //
// http://www.opensource.org/licenses/osl-3.0.php          //
//                                                         //
/////////////////////////////////////////////////////////////


namespace esys
{
  namespace lsm
  {
    template <typename TmplRng>
    UniformRng<TmplRng>::UniformRng(double minRn, double maxRn)
      : m_rng(),
        m_uniform(minRn, maxRn),
        m_generator(m_rng, m_uniform)
    {
    }

    template <typename TmplRng>
    double UniformRng<TmplRng>::operator()()
    {
      return m_generator();
    }

    template <typename TmplRng>
    void UniformRng<TmplRng>::seed()
    {
      m_rng.seed();
    }

    template <typename TmplRng>
    template <typename Tmpl>
    void UniformRng<TmplRng>::seed(Tmpl &s)
    {
      m_rng.seed(s);
    }

    template <typename TmplRng>
    template <typename TmplIt>
    void UniformRng<TmplRng>::seed(TmplIt first, TmplIt last)
    {
      m_rng.seed(first, last);
    }
  }
}
